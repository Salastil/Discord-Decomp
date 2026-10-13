package androidx.lifecycle;

import android.content.Intent;
import android.view.ViewGroup;
import android.view.ViewParent;
import app.rive.core.CommandQueue;
import com.discord.chat.input.views.DCDChatInput;
import com.discord.chat.presentation.list.ChannelChatListAdapter;
import com.discord.chat.presentation.list.ChatListChildView;
import com.discord.crash_reporting.TelemetryRing;
import com.discord.crash_reporting.TelemetryRingSqliteStore;
import com.discord.deep_link.DeepLinks;
import com.discord.jank_stats.JankSessionRecorder;
import com.discord.tti_measurement_view.TTIMeasurementView;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.facebook.react.ReactActivityDelegate;
import com.facebook.react.ReactDelegate;
import com.facebook.react.ReactInstanceManager;
import com.facebook.react.fabric.mounting.SurfaceMountingManager;
import com.facebook.react.modules.core.DefaultHardwareBackBtnHandler;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.facebook.react.modules.core.ReactChoreographer;
import com.facebook.react.modules.debug.DevMenuModule;
import com.facebook.react.modules.debug.DevSettingsModule;
import com.facebook.react.packagerconnection.ReconnectingWebSocket;
import com.facebook.react.runtime.ReactInstance;
import com.facebook.react.runtime.ReactSurfaceImpl;
import com.facebook.react.views.scroll.MaintainVisibleScrollPositionHelper;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.Set;
import java.util.concurrent.ScheduledExecutorService;

/* loaded from: classes.dex */
public final /* synthetic */ class c0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2175d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2176e;

    public /* synthetic */ c0(int i5, Object obj) {
        this.f2175d = i5;
        this.f2176e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2175d) {
            case 0:
                ProcessLifecycleOwner processLifecycleOwner = (ProcessLifecycleOwner) this.f2176e;
                LifecycleRegistry lifecycleRegistry = processLifecycleOwner.f2164x;
                if (processLifecycleOwner.f2160e == 0) {
                    processLifecycleOwner.f2161i = true;
                    lifecycleRegistry.f(n.ON_PAUSE);
                }
                if (processLifecycleOwner.f2159d == 0 && processLifecycleOwner.f2161i) {
                    lifecycleRegistry.f(n.ON_STOP);
                    processLifecycleOwner.f2162v = true;
                    return;
                }
                return;
            case 1:
                CommandQueue.dispose$lambda$1((CommandQueue) this.f2176e);
                return;
            case 2:
                ReactViewGroup reactViewGroup = (ReactViewGroup) this.f2176e;
                if (reactViewGroup == null) {
                    return;
                }
                ViewParent parent = reactViewGroup.getParent();
                ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
                if (viewGroup == null) {
                    return;
                }
                viewGroup.removeView(reactViewGroup);
                return;
            case 3:
                com.google.firebase.messaging.r rVar = (com.google.firebase.messaging.r) this.f2176e;
                ((dc.h) ((ec.c) rVar.f6262w)).o(new app.rive.runtime.kotlin.core.a(4, rVar));
                return;
            case 4:
                cd.g gVar = (cd.g) this.f2176e;
                synchronized (gVar.a) {
                    try {
                        if (gVar.f3432l) {
                            return;
                        }
                        long j = gVar.k - 1;
                        gVar.k = j;
                        if (j > 0) {
                            return;
                        }
                        if (j >= 0) {
                            gVar.a();
                            return;
                        }
                        IllegalStateException illegalStateException = new IllegalStateException();
                        synchronized (gVar.a) {
                            gVar.f3433m = illegalStateException;
                        }
                        return;
                    } finally {
                    }
                }
            case 5:
                ((DCDChatInput) this.f2176e).measureAndLayoutToContentHeight();
                return;
            case 6:
                ChannelChatListAdapter.onBindViewHolder$lambda$11((ChannelChatListAdapter) this.f2176e);
                return;
            case 7:
                ChatListChildView.DefaultImpls.onMeasureConsiderFrozen$lambda$0((ChatListChildView) this.f2176e);
                return;
            case 8:
                TelemetryRing.append$lambda$5((TelemetryRingSqliteStore.EntryPayload) this.f2176e);
                return;
            case 9:
                DeepLinks.init$lambda$1((ScheduledExecutorService) this.f2176e);
                return;
            case 10:
                JankSessionRecorder.flushExecutor_delegate$lambda$2$lambda$1$lambda$0((Runnable) this.f2176e);
                return;
            case 11:
                JankSessionRecorder.acknowledge$lambda$25((Set) this.f2176e);
                return;
            case 12:
                TTIMeasurementView.registerDrawListener$lambda$0((TTIMeasurementView) this.f2176e);
                return;
            case 13:
                ZoomLayoutFixed.onMeasure$lambda$1((ZoomLayoutFixed) this.f2176e);
                return;
            case 14:
                ((ReactActivityDelegate) this.f2176e).lambda$onCreate$0();
                return;
            case 15:
                ReactDelegate.reload$lambda$0((ReactDelegate) this.f2176e);
                return;
            case 16:
                ((ReactInstanceManager) this.f2176e).lambda$runCreateReactContextOnNewThread$0();
                return;
            case 17:
                SurfaceMountingManager.stopSurface$lambda$5((SurfaceMountingManager) this.f2176e);
                return;
            case 18:
                DeviceEventManagerModule.invokeDefaultBackPressRunnable$lambda$0((DefaultHardwareBackBtnHandler) this.f2176e);
                return;
            case 19:
                ReactChoreographer.postFrameCallbackOnChoreographer$lambda$6((ReactChoreographer) this.f2176e);
                return;
            case 20:
                DevMenuModule.reload$lambda$0((DevMenuModule) this.f2176e);
                return;
            case 21:
                DevSettingsModule.reload$lambda$0((DevSettingsModule) this.f2176e);
                return;
            case 22:
                ((ReconnectingWebSocket) this.f2176e).delayedReconnect();
                return;
            case 23:
                ReactInstance.initializeEagerTurboModules$lambda$4((ReactInstance) this.f2176e);
                return;
            case 24:
                ReactSurfaceImpl.clear$lambda$4((ReactSurfaceImpl) this.f2176e);
                return;
            case 25:
                ((com.facebook.react.uimanager.b) this.f2176e).invoke();
                return;
            case 26:
                ((com.facebook.react.uimanager.b) this.f2176e).invoke();
                return;
            case 27:
                ((com.facebook.react.uimanager.c) this.f2176e).invoke();
                return;
            case 28:
                ((MaintainVisibleScrollPositionHelper) this.f2176e).computeTargetView();
                return;
            default:
                com.google.firebase.messaging.i.a((Intent) this.f2176e);
                return;
        }
    }

    public /* synthetic */ c0(com.google.firebase.messaging.i iVar, Intent intent) {
        this.f2175d = 29;
        this.f2176e = intent;
    }
}
