package bs;

import android.content.Context;
import android.view.View;
import com.discord.browser_manager.BrowserManager;
import com.discord.chat.bridge.attachment.Attachment;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.input.views.ChatInputRootView;
import com.discord.chat.input.views.ChatInputRootViewMeasurer;
import com.discord.chat.presentation.list.ChatListView;
import com.discord.chat.presentation.list.InlineMediaOwner;
import com.discord.chat.presentation.list.ScrollState;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.chat.presentation.message.messagepart.MessageContentAccessory;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView;
import com.discord.chat.presentation.message.viewholder.MessageContentViewHolder;
import com.discord.chat.presentation.textutils.LinkStyle;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.crash_reporting.system_logs.SystemLogCapture;
import com.discord.crash_reporting.system_logs.SystemLogUtils;
import com.discord.emoji_picker.EmojiPickerView;
import com.discord.external_pip.ExternalPipModule;
import com.discord.fastest_list.android.view_holder.FastestListViewHolder;
import com.discord.image.animated_image.apng.APNGImageView;
import com.discord.media.engine.video.egl_renderer.EglRenderer;
import com.discord.mobile_voice_overlay.MobileVoiceOverlay;
import com.discord.mobile_voice_overlay.MobileVoiceOverlayModule;
import com.discord.mobile_voice_overlay.utils.OverlayViewProvider;
import com.discord.mobile_voice_overlay.views.OverlayDialog;
import com.discord.mobile_voice_overlay.views.OverlayVoiceSelectorBubbleDialog;
import com.discord.notifications.api.Sticker;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.permissions.NativePermissionManagerModule$createMultiPromiseResolver$1;
import com.discord.primitives.ChannelId;
import com.discord.socialrpc.SocialRpcSessionManager;
import com.discord.span.utilities.spannable.QuoteSpan;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.discord.zoom_layout.ZoomLayoutViewManager;
import com.facebook.react.animated.NativeAnimatedModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArrayBuilder;
import com.facebook.react.fabric.mounting.MountItemDispatcher;
import com.facebook.react.fabric.mounting.mountitems.DispatchCommandMountItem;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Set;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.MatchResult;
import kotlin.text.Regex;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonObjectBuilder;

/* loaded from: classes3.dex */
public final /* synthetic */ class e1 implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3180d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3181e;

    public /* synthetic */ e1(int i5, Object obj) {
        this.f3180d = i5;
        this.f3181e = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean openUrlExternally$lambda$2;
        Unit lineHeightMeasurer$lambda$0;
        Unit measureHeight$lambda$0;
        Unit scrollStateObserver$lambda$4;
        boolean forget$lambda$9;
        Unit onBindViewHolder$lambda$15$lambda$14;
        Unit audioFileDetails$lambda$9;
        LinkStyle bind$lambda$2;
        RenderContext.Insets spannable$lambda$72$lambda$18$lambda$17;
        Unit spannable$lambda$72$lambda$47$lambda$46;
        Unit readFromLogcat$lambda$2$lambda$1;
        String fetchLastTombstone$lambda$2;
        int _init_$lambda$6;
        Unit onUserLeaveHint$lambda$0;
        Unit _init_$lambda$0;
        Unit inflateApngView$lambda$0;
        Unit init$lambda$10$lambda$6;
        Unit selectorDialogProvider$lambda$19$lambda$18$lambda$15;
        Unit selectorDialogProvider$lambda$19$lambda$18$lambda$17;
        Unit mobileVoiceOverlay_delegate$lambda$2$lambda$1;
        Unit renderMessageContent$lambda$6;
        Unit reject$lambda$6;
        Unit resolve$lambda$2;
        Unit sendReady$lambda$16$lambda$15;
        Unit createViewInstance$lambda$0;
        Unit userDrivenScrollEnded$lambda$2$lambda$1;
        Unit dispatchMountItems$lambda$1;
        switch (this.f3180d) {
            case 0:
                d0 d0Var = (d0) this.f3181e;
                zr.a buildSerialDescriptor = (zr.a) obj;
                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                List list = (List) d0Var.f3174c;
                buildSerialDescriptor.getClass();
                Intrinsics.checkNotNullParameter(list, "<set-?>");
                buildSerialDescriptor.f21405b = list;
                return Unit.a;
            case 1:
                j1 j1Var = (j1) this.f3181e;
                int intValue = ((Integer) obj).intValue();
                return j1Var.f3205e[intValue] + ": " + j1Var.i(intValue).a();
            case 2:
                w1 w1Var = (w1) this.f3181e;
                zr.a buildClassSerialDescriptor = (zr.a) obj;
                Intrinsics.checkNotNullParameter(buildClassSerialDescriptor, "$this$buildClassSerialDescriptor");
                zr.a.a(buildClassSerialDescriptor, "first", w1Var.f3250b.getDescriptor());
                zr.a.a(buildClassSerialDescriptor, "second", ((KSerializer) w1Var.f3251c).getDescriptor());
                zr.a.a(buildClassSerialDescriptor, "third", ((KSerializer) w1Var.f3252d).getDescriptor());
                return Unit.a;
            case 3:
                openUrlExternally$lambda$2 = BrowserManager.openUrlExternally$lambda$2((Context) this.f3181e, (String) obj);
                return Boolean.valueOf(openUrlExternally$lambda$2);
            case 4:
                lineHeightMeasurer$lambda$0 = ChatInputRootView.lineHeightMeasurer$lambda$0((ChatInputRootView) this.f3181e, ((Integer) obj).intValue());
                return lineHeightMeasurer$lambda$0;
            case 5:
                measureHeight$lambda$0 = ChatInputRootViewMeasurer.measureHeight$lambda$0((ChatInputRootViewMeasurer) this.f3181e, (ChatInputRootView) obj);
                return measureHeight$lambda$0;
            case 6:
                scrollStateObserver$lambda$4 = ChatListView.scrollStateObserver$lambda$4((ChatListView) this.f3181e, (ScrollState) obj);
                return scrollStateObserver$lambda$4;
            case 7:
                forget$lambda$9 = InlineMediaOwner.forget$lambda$9((View) this.f3181e, (WeakReference) obj);
                return Boolean.valueOf(forget$lambda$9);
            case 8:
                onBindViewHolder$lambda$15$lambda$14 = MessageAccessoriesAdapter.onBindViewHolder$lambda$15$lambda$14((com.discord.chat.presentation.message.h) this.f3181e, ((Integer) obj).intValue());
                return onBindViewHolder$lambda$15$lambda$14;
            case 9:
                audioFileDetails$lambda$9 = AudioPlayerView.setAudioFileDetails$lambda$9((Attachment) this.f3181e, (com.discord.react_strings.RenderContext) obj);
                return audioFileDetails$lambda$9;
            case 10:
                bind$lambda$2 = MessageContentViewHolder.bind$lambda$2((MessageContentAccessory) this.f3181e, (LinkContentNode) obj);
                return bind$lambda$2;
            case 11:
                spannable$lambda$72$lambda$18$lambda$17 = TextUtilsKt.toSpannable$lambda$72$lambda$18$lambda$17((QuoteSpan) this.f3181e, (RenderContext.Insets) obj);
                return spannable$lambda$72$lambda$18$lambda$17;
            case 12:
                spannable$lambda$72$lambda$47$lambda$46 = TextUtilsKt.toSpannable$lambda$72$lambda$47$lambda$46((c0) this.f3181e, (View) obj);
                return spannable$lambda$72$lambda$47$lambda$46;
            case 13:
                readFromLogcat$lambda$2$lambda$1 = SystemLogCapture.readFromLogcat$lambda$2$lambda$1((SystemLogCapture) this.f3181e, (String) obj);
                return readFromLogcat$lambda$2$lambda$1;
            case 14:
                fetchLastTombstone$lambda$2 = SystemLogUtils.fetchLastTombstone$lambda$2((Regex) this.f3181e, (MatchResult) obj);
                return fetchLastTombstone$lambda$2;
            case 15:
                _init_$lambda$6 = EmojiPickerView._init_$lambda$6((EmojiPickerView) this.f3181e, ((Integer) obj).intValue());
                return Integer.valueOf(_init_$lambda$6);
            case 16:
                onUserLeaveHint$lambda$0 = ExternalPipModule.Companion.onUserLeaveHint$lambda$0((ReactContext) this.f3181e, (Result) obj);
                return onUserLeaveHint$lambda$0;
            case 17:
                _init_$lambda$0 = FastestListViewHolder._init_$lambda$0((FastestListViewHolder) this.f3181e, ((Boolean) obj).booleanValue());
                return _init_$lambda$0;
            case 18:
                inflateApngView$lambda$0 = APNGImageView.inflateApngView$lambda$0((APNGImageView) this.f3181e, (String) obj);
                return inflateApngView$lambda$0;
            case 19:
                init$lambda$10$lambda$6 = EglRenderer.init$lambda$10$lambda$6((EglRenderer) this.f3181e, (Exception) obj);
                return init$lambda$10$lambda$6;
            case 20:
                selectorDialogProvider$lambda$19$lambda$18$lambda$15 = MobileVoiceOverlay.selectorDialogProvider$lambda$19$lambda$18$lambda$15((OverlayViewProvider) this.f3181e, (OverlayDialog) obj);
                return selectorDialogProvider$lambda$19$lambda$18$lambda$15;
            case 21:
                selectorDialogProvider$lambda$19$lambda$18$lambda$17 = MobileVoiceOverlay.selectorDialogProvider$lambda$19$lambda$18$lambda$17((OverlayVoiceSelectorBubbleDialog) this.f3181e, (ChannelId) obj);
                return selectorDialogProvider$lambda$19$lambda$18$lambda$17;
            case 22:
                mobileVoiceOverlay_delegate$lambda$2$lambda$1 = MobileVoiceOverlayModule.mobileVoiceOverlay_delegate$lambda$2$lambda$1((MobileVoiceOverlayModule) this.f3181e, (String) obj);
                return mobileVoiceOverlay_delegate$lambda$2$lambda$1;
            case 23:
                renderMessageContent$lambda$6 = NotificationDataUtilsKt.renderMessageContent$lambda$6((Sticker) this.f3181e, (com.discord.react_strings.RenderContext) obj);
                return renderMessageContent$lambda$6;
            case 24:
                reject$lambda$6 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$6((Throwable) this.f3181e, (Promise) obj);
                return reject$lambda$6;
            case 25:
                resolve$lambda$2 = NativePermissionManagerModule$createMultiPromiseResolver$1.resolve$lambda$2(this.f3181e, (Promise) obj);
                return resolve$lambda$2;
            case 26:
                sendReady$lambda$16$lambda$15 = SocialRpcSessionManager.sendReady$lambda$16$lambda$15((JsonObject) this.f3181e, (JsonObjectBuilder) obj);
                return sendReady$lambda$16$lambda$15;
            case 27:
                createViewInstance$lambda$0 = ZoomLayoutViewManager.createViewInstance$lambda$0((ZoomLayoutViewManager) this.f3181e, (ZoomLayoutFixed) obj);
                return createViewInstance$lambda$0;
            case 28:
                userDrivenScrollEnded$lambda$2$lambda$1 = NativeAnimatedModule.userDrivenScrollEnded$lambda$2$lambda$1((Set) this.f3181e, (ReadableArrayBuilder) obj);
                return userDrivenScrollEnded$lambda$2$lambda$1;
            default:
                dispatchMountItems$lambda$1 = MountItemDispatcher.dispatchMountItems$lambda$1((MountItemDispatcher) this.f3181e, (DispatchCommandMountItem) obj);
                return dispatchMountItems$lambda$1;
        }
    }
}
