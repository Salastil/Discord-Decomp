package b7;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Rect;
import android.net.Uri;
import android.view.View;
import com.discord.avatar.react.APNGPreloadModule;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.bridge.contentnode.TimestampContentNode;
import com.discord.chat.input.views.ChatInputLeadingIconRenderer;
import com.discord.chat.presentation.list.delegate.BaseChatListItemDelegate;
import com.discord.chat.presentation.list.delegate.BlockedGroupDelegate;
import com.discord.chat.presentation.list.delegate.DeserializationErrorMessageDelegate;
import com.discord.chat.presentation.list.item.BlockedGroupChatListItem;
import com.discord.chat.presentation.list.item.DeserializationErrorMessageItem;
import com.discord.chat.presentation.message.MessageAccessoriesAdapter;
import com.discord.chat.presentation.message.MessageViewReplyPreview;
import com.discord.chat.presentation.message.messagepart.EmbedMessageAccessory;
import com.discord.chat.presentation.message.messagepart.EphemeralIndicationMessageAccessory;
import com.discord.chat.presentation.message.messagepart.GiftMessageAccessory;
import com.discord.chat.presentation.message.messagepart.GuildEventInviteMessageAccessory;
import com.discord.chat.presentation.message.messagepart.GuildInviteDisabledMessageAccessory;
import com.discord.chat.presentation.message.messagepart.MediaMosaicAttachmentMessageAccessory;
import com.discord.chat.presentation.message.messagepart.MessageComponentsAccessory;
import com.discord.chat.presentation.message.messagepart.MessageContentAccessory;
import com.discord.chat.presentation.message.messagepart.PollMessageAccessory;
import com.discord.chat.presentation.message.messagepart.PostPreviewEmbedMessageAccessory;
import com.discord.chat.presentation.message.messagepart.PremiumGroupInviteMessageAccessory;
import com.discord.chat.presentation.message.messagepart.ReferralMessageAccessory;
import com.discord.chat.presentation.message.view.MediaView;
import com.discord.chat.presentation.message.view.PremiumGroupInviteView;
import com.discord.chat.presentation.message.view.ReferralView;
import com.discord.chat.presentation.message.view.polls.BasePollWithRecyclerView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerManager;
import com.discord.chat.presentation.message.viewholder.EphemeralIndicationViewHolder;
import com.discord.chat.presentation.message.viewholder.GuildEventInviteViewHolder;
import com.discord.chat.presentation.message.viewholder.GuildInviteDisabledViewHolder;
import com.discord.chat.presentation.message.viewholder.MessageContentViewHolder;
import com.discord.chat.presentation.textutils.EmojiRendererKt;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.crash_reporting.system_logs.SystemLogReport;
import com.discord.crash_reporting.system_logs.SystemLogUtils;
import com.discord.foreground_service.ForegroundServiceManager;
import com.discord.foreground_service.service.ServiceNotificationConfiguration;
import com.discord.lifecycle.ForegroundServiceStartGuard;
import com.discord.media.utils.MediaResolver;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.MediaSource;
import com.discord.metric_monitor.MetricEvent;
import com.discord.metric_monitor.MetricMonitorModule;
import com.discord.mobile_voice_overlay.MobileVoiceOverlay;
import com.discord.mobile_voice_overlay.views.OverlayMenuBubbleDialog;
import com.discord.mobile_voice_overlay.views.OverlayVoiceBubble;
import com.discord.notifications.api.Embed;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.permissions.NativePermissionManagerModule$createMultiPromiseResolver$1;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.WritableMap;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlinx.coroutines.Deferred;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2747d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2748e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2749i;

    public /* synthetic */ a(int i5, Object obj, Object obj2) {
        this.f2747d = i5;
        this.f2748e = obj;
        this.f2749i = obj2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit _init_$lambda$0;
        Deferred orStartDownload$lambda$0;
        Unit applyLeadingIcon$lambda$2;
        Unit bindView$lambda$2;
        Unit bindView$lambda$1;
        Unit onBindViewHolder$lambda$6;
        Unit onBindViewHolder$lambda$37;
        Unit onBindViewHolder$lambda$41;
        Unit onBindViewHolder$lambda$12;
        Unit onBindViewHolder$lambda$17;
        Unit configureReply$lambda$10;
        Unit registerForPortal$lambda$26;
        Unit bind$lambda$4$lambda$3;
        Unit bind$lambda$13$lambda$11;
        Unit bind$lambda$3;
        Unit unit;
        Unit bind$lambda$1$lambda$0;
        Unit bind$lambda$0;
        Unit bind$lambda$1$lambda$02;
        Unit bind$lambda$02;
        Unit renderEmoji$lambda$0;
        Unit spannable$lambda$72$lambda$65;
        Unit spannable$lambda$72$lambda$68;
        Unit spannable$lambda$72$lambda$21;
        Unit fetchNativeCrashDiagnostics$lambda$2;
        Unit handleCreateOrUpdateService$lambda$6$lambda$5;
        Unit handleVideo$lambda$4$lambda$3;
        Unit voiceBubbleProvider$lambda$9$lambda$4$lambda$3;
        Unit renderMessageContent$lambda$12;
        Unit reject$lambda$7;
        switch (this.f2747d) {
            case 0:
                _init_$lambda$0 = MetricMonitorModule._init_$lambda$0((MetricMonitorModule) this.f2748e, (ReactApplicationContext) this.f2749i, (MetricEvent) obj);
                return _init_$lambda$0;
            case 1:
                orStartDownload$lambda$0 = APNGPreloadModule.getOrStartDownload$lambda$0((APNGPreloadModule) this.f2748e, (String) this.f2749i, (String) obj);
                return orStartDownload$lambda$0;
            case 2:
                applyLeadingIcon$lambda$2 = ChatInputLeadingIconRenderer.applyLeadingIcon$lambda$2((ChatInputLeadingIconRenderer) this.f2748e, (String) this.f2749i, (Bitmap) obj);
                return applyLeadingIcon$lambda$2;
            case 3:
                bindView$lambda$2 = BlockedGroupDelegate.bindView$lambda$2((BlockedGroupDelegate) this.f2748e, (BlockedGroupChatListItem) this.f2749i, (View) obj);
                return bindView$lambda$2;
            case 4:
                bindView$lambda$1 = DeserializationErrorMessageDelegate.bindView$lambda$1((BaseChatListItemDelegate.Metadata) this.f2748e, (DeserializationErrorMessageItem) this.f2749i, ((Boolean) obj).booleanValue());
                return bindView$lambda$1;
            case 5:
                onBindViewHolder$lambda$6 = MessageAccessoriesAdapter.onBindViewHolder$lambda$6((MessageAccessoriesAdapter) this.f2748e, (EmbedMessageAccessory) this.f2749i, ((Boolean) obj).booleanValue());
                return onBindViewHolder$lambda$6;
            case 6:
                onBindViewHolder$lambda$37 = MessageAccessoriesAdapter.onBindViewHolder$lambda$37((MessageAccessoriesAdapter) this.f2748e, (MessageComponentsAccessory) this.f2749i, ((Boolean) obj).booleanValue());
                return onBindViewHolder$lambda$37;
            case 7:
                onBindViewHolder$lambda$41 = MessageAccessoriesAdapter.onBindViewHolder$lambda$41((MessageAccessoriesAdapter) this.f2748e, (PostPreviewEmbedMessageAccessory) this.f2749i, ((Boolean) obj).booleanValue());
                return onBindViewHolder$lambda$41;
            case 8:
                onBindViewHolder$lambda$12 = MessageAccessoriesAdapter.onBindViewHolder$lambda$12((MessageAccessoriesAdapter) this.f2748e, (GiftMessageAccessory) this.f2749i, (String) obj);
                return onBindViewHolder$lambda$12;
            case 9:
                onBindViewHolder$lambda$17 = MessageAccessoriesAdapter.onBindViewHolder$lambda$17((MessageAccessoriesAdapter) this.f2748e, (MediaMosaicAttachmentMessageAccessory) this.f2749i, ((Boolean) obj).booleanValue());
                return onBindViewHolder$lambda$17;
            case 10:
                configureReply$lambda$10 = MessageViewReplyPreview.configureReply$lambda$10((MessageViewReplyPreview) this.f2748e, (String) this.f2749i, ((Integer) obj).intValue());
                return configureReply$lambda$10;
            case 11:
                registerForPortal$lambda$26 = MediaView.registerForPortal$lambda$26((MediaSource) this.f2748e, (MediaView) this.f2749i, (View) obj);
                return registerForPortal$lambda$26;
            case 12:
                bind$lambda$4$lambda$3 = PremiumGroupInviteView.bind$lambda$4$lambda$3((Function2) this.f2748e, (PremiumGroupInviteMessageAccessory) this.f2749i, (LinkContentNode) obj);
                return bind$lambda$4$lambda$3;
            case 13:
                bind$lambda$13$lambda$11 = ReferralView.bind$lambda$13$lambda$11((Function2) this.f2748e, (ReferralMessageAccessory) this.f2749i, (LinkContentNode) obj);
                return bind$lambda$13$lambda$11;
            case 14:
                bind$lambda$3 = BasePollWithRecyclerView.bind$lambda$3((Function3) this.f2748e, (PollMessageAccessory) this.f2749i, (String) obj);
                return bind$lambda$3;
            case 15:
                unit = AudioPlayerManager.setupPlayer$lambda$2$lambda$1((AudioPlayerManager.AudioSource) this.f2748e, (Function1) this.f2749i, (MediaPlayer.Event) obj);
                return unit;
            case 16:
                bind$lambda$1$lambda$0 = EphemeralIndicationViewHolder.bind$lambda$1$lambda$0((EphemeralIndicationViewHolder) this.f2748e, (EphemeralIndicationMessageAccessory) this.f2749i, (String) obj);
                return bind$lambda$1$lambda$0;
            case 17:
                bind$lambda$0 = GuildEventInviteViewHolder.bind$lambda$0((GuildEventInviteViewHolder) this.f2748e, (GuildEventInviteMessageAccessory) this.f2749i, (LinkContentNode) obj);
                return bind$lambda$0;
            case 18:
                bind$lambda$1$lambda$02 = GuildInviteDisabledViewHolder.bind$lambda$1$lambda$0((GuildInviteDisabledViewHolder) this.f2748e, (GuildInviteDisabledMessageAccessory) this.f2749i, (String) obj);
                return bind$lambda$1$lambda$02;
            case 19:
                bind$lambda$02 = MessageContentViewHolder.bind$lambda$0((Function2) this.f2748e, (MessageContentAccessory) this.f2749i, (LinkContentNode) obj);
                return bind$lambda$02;
            case 20:
                renderEmoji$lambda$0 = EmojiRendererKt.renderEmoji$lambda$0((RenderContext) this.f2748e, (EmojiContentNode) this.f2749i, (View) obj);
                return renderEmoji$lambda$0;
            case 21:
                spannable$lambda$72$lambda$65 = TextUtilsKt.toSpannable$lambda$72$lambda$65((RenderContext) this.f2748e, (TimestampContentNode) this.f2749i, (View) obj);
                return spannable$lambda$72$lambda$65;
            case 22:
                spannable$lambda$72$lambda$68 = TextUtilsKt.toSpannable$lambda$72$lambda$68((RenderContext) this.f2748e, (SoundmojiContentNode) this.f2749i, (View) obj);
                return spannable$lambda$72$lambda$68;
            case 23:
                spannable$lambda$72$lambda$21 = TextUtilsKt.toSpannable$lambda$72$lambda$21((RenderContext) this.f2748e, (InlineCodeContentNode) this.f2749i, (View) obj);
                return spannable$lambda$72$lambda$21;
            case 24:
                fetchNativeCrashDiagnostics$lambda$2 = SystemLogReport.fetchNativeCrashDiagnostics$lambda$2((Function1) this.f2748e, (Context) this.f2749i, (SystemLogUtils.Tombstone) obj);
                return fetchNativeCrashDiagnostics$lambda$2;
            case 25:
                handleCreateOrUpdateService$lambda$6$lambda$5 = ForegroundServiceManager.handleCreateOrUpdateService$lambda$6$lambda$5((ServiceNotificationConfiguration.Type) this.f2748e, (ForegroundServiceStartGuard.Result) this.f2749i, (Exception) obj);
                return handleCreateOrUpdateService$lambda$6$lambda$5;
            case 26:
                handleVideo$lambda$4$lambda$3 = MediaResolver.handleVideo$lambda$4$lambda$3((MediaResolver) this.f2748e, (Uri) this.f2749i, ((Float) obj).floatValue());
                return handleVideo$lambda$4$lambda$3;
            case 27:
                voiceBubbleProvider$lambda$9$lambda$4$lambda$3 = MobileVoiceOverlay.voiceBubbleProvider$lambda$9$lambda$4$lambda$3((OverlayVoiceBubble) this.f2748e, (Rect) this.f2749i, (OverlayMenuBubbleDialog) obj);
                return voiceBubbleProvider$lambda$9$lambda$4$lambda$3;
            case 28:
                renderMessageContent$lambda$12 = NotificationDataUtilsKt.renderMessageContent$lambda$12((Embed) this.f2748e, (NotificationData) this.f2749i, (com.discord.react_strings.RenderContext) obj);
                return renderMessageContent$lambda$12;
            default:
                reject$lambda$7 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$7((Throwable) this.f2748e, (WritableMap) this.f2749i, (Promise) obj);
                return reject$lambda$7;
        }
    }
}
