package com.discord.mobile_voice_overlay.views;

import android.view.View;
import com.discord.notifications.client.NotificationCache;
import com.discord.notifications.client.NotificationClient;
import com.discord.notifications.renderer.utils.RenderNotificationMessageContentKt;
import com.discord.portals.from_native.PortalFromNativeContextManager;
import com.discord.primitives.ChannelId;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetModule;
import com.discord.react_gesture_handler.nested_touch.NestedClickableSpan;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchTracker;
import com.discord.recycler_view.utils.TransitionResilientGridLayoutManager;
import com.discord.recycler_view.utils.TransitionResilientLinearLayoutManager;
import com.discord.recycler_view.utils.TransitionResilientRecyclingDelegate;
import com.discord.tti_manager.TTIBroadcastReceiverKt;
import com.discord.user_search_worker.UserSearchWorker;
import com.discord.user_search_worker.UserSearchWorkerResult;
import com.facebook.react.ReactHost;
import com.facebook.react.common.mapbuffer.MapBuffer;
import com.facebook.react.common.mapbuffer.ReadableMapBuffer;
import com.facebook.react.defaults.DefaultReactHost;
import com.facebook.react.defaults.DefaultReactHostDelegate;
import com.facebook.react.packagerconnection.FileIoHandler;
import com.facebook.react.packagerconnection.PackagerConnectionSettings;
import com.margelo.nitro.rive.HybridRiveFile;
import com.margelo.nitro.rive.HybridRiveView;
import com.margelo.nitro.rive.RiveError;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenFragmentWrapper;
import com.swmansion.rnscreens.ScreenStack;
import com.swmansion.rnscreens.ScreenStackFragmentWrapper;
import cs.j;
import java.lang.ref.WeakReference;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.MatchResult;
import kotlinx.serialization.json.JsonBuilder;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4305d;

    public /* synthetic */ e(int i5) {
        this.f4305d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onChannelSelected$lambda$2;
        Unit json$lambda$19;
        Unit unit;
        CharSequence renderNotificationMessageContent$lambda$0;
        CharSequence renderNotificationMessageContent$lambda$1;
        Unit addPortal$lambda$0;
        Unit addPortal$lambda$1;
        Object keysRequest$lambda$0;
        boolean handleTouch$lambda$2$lambda$0;
        Exception _init_$lambda$0;
        Exception _init_$lambda$02;
        Exception _init_$lambda$03;
        Unit json$lambda$0;
        Unit json$lambda$02;
        Comparable searchUsers$lambda$3;
        Comparable searchUsers$lambda$4;
        Unit destroy$lambda$0;
        Map bundleSource$lambda$1;
        CharSequence string$lambda$5;
        Unit defaultReactHost$lambda$0;
        Unit _init_$lambda$04;
        boolean run$lambda$1$lambda$0;
        Map _packagerOptionsUpdater$lambda$1;
        boolean refreshAfterAssetChange$lambda$1;
        Unit onError$lambda$4;
        switch (this.f4305d) {
            case 0:
                onChannelSelected$lambda$2 = OverlayVoiceSelectorBubbleDialog.onChannelSelected$lambda$2((ChannelId) obj);
                return onChannelSelected$lambda$2;
            case 1:
                json$lambda$19 = NotificationCache.json$lambda$19((JsonBuilder) obj);
                return json$lambda$19;
            case 2:
                unit = NotificationClient.tokenListener$lambda$1((String) obj);
                return unit;
            case 3:
                renderNotificationMessageContent$lambda$0 = RenderNotificationMessageContentKt.renderNotificationMessageContent$lambda$0((MatchResult) obj);
                return renderNotificationMessageContent$lambda$0;
            case 4:
                renderNotificationMessageContent$lambda$1 = RenderNotificationMessageContentKt.renderNotificationMessageContent$lambda$1((MatchResult) obj);
                return renderNotificationMessageContent$lambda$1;
            case 5:
                addPortal$lambda$0 = PortalFromNativeContextManager.addPortal$lambda$0((View) obj);
                return addPortal$lambda$0;
            case 6:
                addPortal$lambda$1 = PortalFromNativeContextManager.addPortal$lambda$1((View) obj);
                return addPortal$lambda$1;
            case 7:
                keysRequest$lambda$0 = ReactAssetModule.keysRequest$lambda$0((ReactAsset) obj);
                return keysRequest$lambda$0;
            case 8:
                handleTouch$lambda$2$lambda$0 = NestedScrollOnTouchTracker.handleTouch$lambda$2$lambda$0((NestedClickableSpan) obj);
                return Boolean.valueOf(handleTouch$lambda$2$lambda$0);
            case 9:
                _init_$lambda$0 = TransitionResilientGridLayoutManager._init_$lambda$0((Exception) obj);
                return _init_$lambda$0;
            case 10:
                _init_$lambda$02 = TransitionResilientLinearLayoutManager._init_$lambda$0((Exception) obj);
                return _init_$lambda$02;
            case 11:
                _init_$lambda$03 = TransitionResilientRecyclingDelegate._init_$lambda$0((Exception) obj);
                return _init_$lambda$03;
            case 12:
                json$lambda$0 = TTIBroadcastReceiverKt.json$lambda$0((JsonBuilder) obj);
                return json$lambda$0;
            case 13:
                json$lambda$02 = UserSearchWorker.json$lambda$0((JsonBuilder) obj);
                return json$lambda$02;
            case 14:
                searchUsers$lambda$3 = UserSearchWorker.searchUsers$lambda$3((UserSearchWorkerResult) obj);
                return searchUsers$lambda$3;
            case 15:
                searchUsers$lambda$4 = UserSearchWorker.searchUsers$lambda$4((UserSearchWorkerResult) obj);
                return searchUsers$lambda$4;
            case 16:
                destroy$lambda$0 = ReactHost.destroy$lambda$0(((Boolean) obj).booleanValue());
                return destroy$lambda$0;
            case 17:
                bundleSource$lambda$1 = ReactHost.setBundleSource$lambda$1((Map) obj);
                return bundleSource$lambda$1;
            case 18:
                string$lambda$5 = ReadableMapBuffer.toString$lambda$5((MapBuffer.Entry) obj);
                return string$lambda$5;
            case 19:
                defaultReactHost$lambda$0 = DefaultReactHost.getDefaultReactHost$lambda$0((Exception) obj);
                return defaultReactHost$lambda$0;
            case 20:
                _init_$lambda$04 = DefaultReactHostDelegate._init_$lambda$0((Exception) obj);
                return _init_$lambda$04;
            case 21:
                run$lambda$1$lambda$0 = FileIoHandler.run$lambda$1$lambda$0((Map.Entry) obj);
                return Boolean.valueOf(run$lambda$1$lambda$0);
            case 22:
                _packagerOptionsUpdater$lambda$1 = PackagerConnectionSettings._packagerOptionsUpdater$lambda$1((Map) obj);
                return _packagerOptionsUpdater$lambda$1;
            case 23:
                refreshAfterAssetChange$lambda$1 = HybridRiveFile.refreshAfterAssetChange$lambda$1((WeakReference) obj);
                return Boolean.valueOf(refreshAfterAssetChange$lambda$1);
            case 24:
                onError$lambda$4 = HybridRiveView.onError$lambda$4((RiveError) obj);
                return onError$lambda$4;
            case 25:
                ScreenFragmentWrapper it = (ScreenFragmentWrapper) obj;
                ScreenStack.Companion companion = ScreenStack.Companion;
                Intrinsics.checkNotNullParameter(it, "it");
                return (ScreenStackFragmentWrapper) it;
            case 26:
                ScreenFragmentWrapper it2 = (ScreenFragmentWrapper) obj;
                ScreenStack.Companion companion2 = ScreenStack.Companion;
                Intrinsics.checkNotNullParameter(it2, "it");
                return Boolean.valueOf(it2.a().getActivityState() == Screen.ActivityState.f6678d);
            case 27:
                ScreenFragmentWrapper it3 = (ScreenFragmentWrapper) obj;
                ScreenStack.Companion companion3 = ScreenStack.Companion;
                Intrinsics.checkNotNullParameter(it3, "it");
                return Boolean.valueOf(it3.b());
            case 28:
                ScreenFragmentWrapper it4 = (ScreenFragmentWrapper) obj;
                ScreenStack.Companion companion4 = ScreenStack.Companion;
                Intrinsics.checkNotNullParameter(it4, "it");
                return Boolean.valueOf(!it4.g().isAdded());
            default:
                zr.a buildSerialDescriptor = (zr.a) obj;
                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                zr.a.a(buildSerialDescriptor, "JsonPrimitive", new j(new com.discord.notifications.client.a(16)));
                zr.a.a(buildSerialDescriptor, "JsonNull", new j(new com.discord.notifications.client.a(17)));
                zr.a.a(buildSerialDescriptor, "JsonLiteral", new j(new com.discord.notifications.client.a(18)));
                zr.a.a(buildSerialDescriptor, "JsonObject", new j(new com.discord.notifications.client.a(19)));
                zr.a.a(buildSerialDescriptor, "JsonArray", new j(new com.discord.notifications.client.a(20)));
                return Unit.a;
        }
    }
}
