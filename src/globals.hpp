#pragma once

#include "log.hpp"
#include <hyprland/src/includes.hpp>
#include <any>

#define private public
#include <hyprland/src/Compositor.hpp>
#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/managers/KeybindManager.hpp>
#undef private

#include "GridLayout.hpp"


inline HANDLE PHANDLE = nullptr;
inline std::unique_ptr<GridLayout> g_GridLayout;

inline bool g_isOverView;
inline bool g_isInHotArea;
inline int g_enable_hotarea;
inline std::string g_hotarea_monitor;
inline int g_hotarea_pos;
inline int g_hotarea_size;
inline unsigned int g_swipe_fingers;
inline int g_isGestureBegin;
inline int g_move_focus_distance;
inline int g_enable_gesture;
inline int g_disable_workspace_change;
inline int g_disable_spawn;
inline int g_auto_exit;
inline int g_auto_fullscreen;
inline int g_only_active_workspace;
inline int g_only_active_monitor;
inline int g_enable_alt_release_exit;
inline int g_alt_toggle_auto_next;
inline int g_click_in_cursor;
inline int g_hight_of_titlebar;
inline std::string g_alt_replace_key;

inline bool g_isOverViewExiting;
inline bool g_forece_display_all;

inline CFunctionHook* g_pOnSwipeBeginHook = nullptr;
inline CFunctionHook* g_pOnSwipeEndHook = nullptr;
inline CFunctionHook* g_pOnSwipeUpdateHook = nullptr;
inline CFunctionHook* g_pCWindow_onUnmap = nullptr;
inline CFunctionHook* g_pChangeworkspaceHook = nullptr;
inline CFunctionHook* g_pMoveActiveToWorkspaceHook = nullptr;
inline CFunctionHook* g_pSpawnHook = nullptr;
inline CFunctionHook* g_pStartAnimHook = nullptr;
inline CFunctionHook* g_pFullscreenActiveHook = nullptr;
inline CFunctionHook* g_pOnKeyboardKeyHook = nullptr;
inline CFunctionHook* g_pHyprDwindleLayout_recalculateMonitor = nullptr;
inline CFunctionHook* g_pHyprMasterLayout_recalculateMonitor = nullptr;
inline CFunctionHook* g_pHyprDwindleLayout_recalculateWindow = nullptr;
inline CFunctionHook* g_pSDwindleNodeData_recalcSizePosRecursive = nullptr;
inline CFunctionHook* g_pCInputManager_onMouseButton = nullptr;

inline void errorNotif()
{
	HyprlandAPI::addNotificationV2(
		PHANDLE,
		{
			{"text", "Something has gone very wrong. Check the log for details."},
			{"time", (uint64_t)10000},
			{"color", CColor(1.0, 0.0, 0.0, 1.0)},
			{"icon", ICON_ERROR},
		});
}
