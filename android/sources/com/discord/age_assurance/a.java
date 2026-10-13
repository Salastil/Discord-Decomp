package com.discord.age_assurance;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.view.MotionEvent;
import android.view.View;
import com.discord.browser_manager.BrowserManager;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.presentation.message.MessageViewReplyPreview;
import com.discord.chat.presentation.message.view.MediaView;
import com.discord.chat.presentation.message.view.SpoilerView;
import com.discord.chat.reactevents.ChatViewEventHandler;
import com.discord.crash_reporting.CrashPersistence;
import com.discord.crash_reporting.CrashReportingModule;
import com.discord.crash_reporting.system_logs.SystemLogReport;
import com.discord.fastest_list.android.FastestListView;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.MediaSource;
import com.discord.mobile_voice_overlay.MobileVoiceOverlay;
import com.discord.mobile_voice_overlay.views.OverlayTrashWrap;
import com.discord.mobile_voice_overlay.views.OverlayVoiceBubble;
import com.discord.permissions.NativePermissionManagerModule$createMultiPromiseResolver$1;
import com.discord.reactevents.ReactEvent;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.NativeArray;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.runtime.ReactInstance;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.play.agesignals.AgeSignalsAccessResult;
import com.google.android.play.agesignals.AgeSignalsManager;
import hn.h;
import hn.i;
import hn.k;
import hn.l;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3733d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3734e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3735i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3736v;

    public /* synthetic */ a(Object obj, Object obj2, Object obj3, int i5) {
        this.f3733d = i5;
        this.f3734e = obj;
        this.f3735i = obj2;
        this.f3736v = obj3;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit ageSignals$lambda$0;
        Unit tryOpenUrlWithCustomTabs$lambda$0;
        Unit configureReply$lambda$9;
        Unit registerForPortal$lambda$25;
        Unit onObscureToggleVisibilityClick$lambda$3;
        Unit emitReactEvent$lambda$0;
        Unit lastCrashReport$lambda$2;
        Unit onScrollListener$lambda$3;
        Unit voiceBubbleProvider$lambda$9$lambda$6$lambda$5;
        Unit reject$lambda$10;
        Unit reject$lambda$5;
        Unit reject$lambda$9;
        Unit callFunctionOnModule$lambda$22;
        switch (this.f3733d) {
            case 0:
                ageSignals$lambda$0 = PlayAgeSignalsModule.getAgeSignals$lambda$0((PlayAgeSignalsModule) this.f3734e, (AgeSignalsManager) this.f3735i, (Promise) this.f3736v, (AgeSignalsAccessResult) obj);
                break;
            case 1:
                tryOpenUrlWithCustomTabs$lambda$0 = BrowserManager.tryOpenUrlWithCustomTabs$lambda$0((Context) this.f3734e, (String) this.f3735i, (Function1) this.f3736v, (Exception) obj);
                break;
            case 2:
                configureReply$lambda$9 = MessageViewReplyPreview.configureReply$lambda$9((StructurableText) this.f3734e, (MessageViewReplyPreview) this.f3735i, (Message) this.f3736v, ((Integer) obj).intValue());
                break;
            case 3:
                registerForPortal$lambda$25 = MediaView.registerForPortal$lambda$25((MediaView) this.f3734e, (MediaPlayer) this.f3735i, (MediaSource) this.f3736v, (View) obj);
                break;
            case 4:
                onObscureToggleVisibilityClick$lambda$3 = SpoilerView.onObscureToggleVisibilityClick$lambda$3((SpoilerView) this.f3734e, (View) this.f3735i, (Function1) this.f3736v, ((Boolean) obj).booleanValue());
                break;
            case 5:
                emitReactEvent$lambda$0 = ChatViewEventHandler.emitReactEvent$lambda$0((ReactEvents) this.f3734e, (Context) this.f3735i, (Function0) this.f3736v, (ReactEvent) obj);
                break;
            case 6:
                lastCrashReport$lambda$2 = CrashReportingModule.getLastCrashReport$lambda$2((CrashReportingModule) this.f3734e, (CrashPersistence.LastCrashInfo) this.f3735i, (Callback) this.f3736v, (SystemLogReport.NativeCrashDiagnostics) obj);
                break;
            case 7:
                onScrollListener$lambda$3 = FastestListView.onScrollListener$lambda$3((FastestListView) this.f3734e, (Function2) this.f3735i, (Function2) this.f3736v, ((Boolean) obj).booleanValue());
                break;
            case 8:
                voiceBubbleProvider$lambda$9$lambda$6$lambda$5 = MobileVoiceOverlay.voiceBubbleProvider$lambda$9$lambda$6$lambda$5((OverlayVoiceBubble) this.f3734e, (MotionEvent) this.f3735i, (MobileVoiceOverlay) this.f3736v, (OverlayTrashWrap) obj);
                break;
            case 9:
                reject$lambda$10 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$10((String) this.f3734e, (String) this.f3735i, (WritableMap) this.f3736v, (Promise) obj);
                break;
            case 10:
                reject$lambda$5 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$5((String) this.f3734e, (String) this.f3735i, (Throwable) this.f3736v, (Promise) obj);
                break;
            case 11:
                reject$lambda$9 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$9((String) this.f3734e, (Throwable) this.f3735i, (WritableMap) this.f3736v, (Promise) obj);
                break;
            case 12:
                callFunctionOnModule$lambda$22 = ReactHostImpl.callFunctionOnModule$lambda$22((String) this.f3734e, (String) this.f3735i, (NativeArray) this.f3736v, (ReactInstance) obj);
                break;
            case 13:
                h currentNavState = (h) this.f3734e;
                l rejectedRequest = (l) this.f3735i;
                k rejectionReason = (k) this.f3736v;
                i observer = (i) obj;
                Intrinsics.checkNotNullParameter(observer, "observer");
                in.a aVar = (in.a) observer;
                aVar.getClass();
                Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
                Intrinsics.checkNotNullParameter(rejectedRequest, "rejectedRequest");
                Intrinsics.checkNotNullParameter(rejectionReason, "reason");
                in.c eventEmitter$react_native_screens_release = aVar.getEventEmitter$react_native_screens_release();
                eventEmitter$react_native_screens_release.getClass();
                Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
                Intrinsics.checkNotNullParameter(rejectedRequest, "rejectedRequest");
                Intrinsics.checkNotNullParameter(rejectionReason, "rejectionReason");
                ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new jn.c(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, currentNavState, rejectedRequest, rejectionReason));
                break;
            default:
                String str = (String) this.f3734e;
                um.f fVar = (um.f) this.f3735i;
                Function1 function1 = (Function1) this.f3736v;
                Drawable drawable = (Drawable) obj;
                if (Intrinsics.areEqual(str, fVar.f18958b) && fVar.a == null) {
                    function1.invoke(new um.b(drawable));
                }
                break;
        }
        return Unit.a;
    }
}
