package com.discord.chat.presentation.message;

import android.content.Context;
import android.graphics.Paint;
import android.graphics.Rect;
import android.os.Bundle;
import android.text.SpannableStringBuilder;
import android.text.TextPaint;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.SetTextSizeSpKt;
import com.discord.channel_spine.ChannelSpineView;
import com.discord.chat.R;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.MessageKt;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.chat.bridge.executedcommand.ExecutedCommand;
import com.discord.chat.bridge.executedcommand.ExecutedCommandBackgroundStyles;
import com.discord.chat.bridge.referencedmessage.LoadedReferencedMessage;
import com.discord.chat.bridge.referencedmessage.ReferencedMessage;
import com.discord.chat.bridge.referencedmessage.SystemReferencedMessage;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColorsKt;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.databinding.MessageViewReplyPreviewBinding;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.utils.DisplayNameStylesUtils;
import com.discord.chat.presentation.message.utils.ReplyUtilsKt;
import com.discord.chat.presentation.message.view.MessageContentView;
import com.discord.chat.presentation.spine.SpineParentMessage;
import com.discord.chat.presentation.textutils.LinkBackgroundStyle;
import com.discord.chat.presentation.textutils.LinkStyle;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.image.fresco.SetImageUriWithCachePolicyKt;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.misc.utilities.view.ViewClippingUtilsKt;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.react_strings.RenderContext;
import com.discord.span.utilities.BackgroundSpanDrawer;
import com.discord.span.utilities.SpannableExtensionsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u00012\u00020\u0002B\u001d\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0004\b\u0007\u0010\bJ\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0002J\u0010\u0010\u0015\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0002J\u0010\u0010\u0016\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0002J\b\u0010\u0017\u001a\u00020\u0012H\u0002J&\u0010\u0018\u001a\u00020\u00122\u0006\u0010\u0019\u001a\u00020\u001a2\b\b\u0002\u0010\u001b\u001a\u00020\u001c2\f\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00120\u001eJE\u0010\u001f\u001a\u00020\u00122\u0006\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020\u001c2\u0006\u0010%\u001a\u00020\u001c2\u0006\u0010&\u001a\u00020\u001c2\u0006\u0010'\u001a\u00020\u001c2\u0006\u0010(\u001a\u00020)¢\u0006\u0004\b*\u0010+J\u0006\u0010,\u001a\u00020\u0012R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010¨\u0006-"}, d2 = {"Lcom/discord/chat/presentation/message/MessageViewReplyPreview;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "Lcom/discord/chat/presentation/spine/SpineParentMessage;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "binding", "Lcom/discord/chat/databinding/MessageViewReplyPreviewBinding;", "replyTextLineBounds", "Landroid/graphics/Rect;", "spineOriginView", "Landroid/view/View;", "getSpineOriginView", "()Landroid/view/View;", "configureLeadingIcon", "", "message", "Lcom/discord/chat/bridge/Message;", "configureTrailingIcon", "configureClanTagChiplet", "measureAndSetReplyLeadingViewsHeight", "configureReply", "reply", "Lcom/discord/chat/bridge/referencedmessage/ReferencedMessage;", "showSpine", "", ViewProps.ON_CLICK, "Lkotlin/Function0;", "configureExecutedCommand", "messageId", "Lcom/discord/primitives/MessageId;", "executedCommand", "Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "shouldAnimateEmoji", "shouldShowLinkDecorations", "shouldShowRoleDot", "shouldShowRoleOnName", "eventHandler", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "configureExecutedCommand-dB0-bEw", "(Ljava/lang/String;Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;ZZZZLcom/discord/chat/presentation/events/ChatEventHandler;)V", "clear", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMessageViewReplyPreview.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MessageViewReplyPreview.kt\ncom/discord/chat/presentation/message/MessageViewReplyPreview\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,461:1\n327#2,4:462\n255#2:467\n257#2,2:468\n257#2,2:470\n257#2,2:472\n257#2,2:474\n311#2:476\n327#2,4:477\n312#2:481\n257#2,2:482\n257#2,2:484\n257#2,2:486\n257#2,2:488\n257#2,2:490\n257#2,2:492\n257#2,2:494\n257#2,2:496\n257#2,2:498\n257#2,2:500\n257#2,2:502\n257#2,2:504\n257#2,2:506\n257#2,2:508\n257#2,2:510\n257#2,2:512\n257#2,2:514\n257#2,2:516\n257#2,2:518\n37#2,2:520\n55#2:522\n257#2,2:523\n257#2,2:525\n257#2,2:527\n257#2,2:529\n257#2,2:531\n257#2,2:533\n257#2,2:535\n257#2,2:537\n257#2,2:539\n257#2,2:541\n257#2,2:543\n257#2,2:545\n257#2,2:547\n1#3:466\n*S KotlinDebug\n*F\n+ 1 MessageViewReplyPreview.kt\ncom/discord/chat/presentation/message/MessageViewReplyPreview\n*L\n107#1:462,4\n74#1:467\n123#1:468,2\n137#1:470,2\n143#1:472,2\n145#1:474,2\n162#1:476\n162#1:477,4\n162#1:481\n188#1:482,2\n189#1:484,2\n190#1:486,2\n194#1:488,2\n200#1:490,2\n206#1:492,2\n208#1:494,2\n211#1:496,2\n222#1:498,2\n223#1:500,2\n224#1:502,2\n274#1:504,2\n275#1:506,2\n276#1:508,2\n279#1:510,2\n280#1:512,2\n282#1:514,2\n288#1:516,2\n289#1:518,2\n303#1:520,2\n303#1:522\n367#1:523,2\n368#1:525,2\n370#1:527,2\n371#1:529,2\n372#1:531,2\n382#1:533,2\n383#1:535,2\n384#1:537,2\n454#1:539,2\n455#1:541,2\n456#1:543,2\n457#1:545,2\n458#1:547,2\n*E\n"})
/* loaded from: classes.dex */
public final class MessageViewReplyPreview extends ConstraintLayout implements SpineParentMessage {

    @NotNull
    private final MessageViewReplyPreviewBinding binding;

    @NotNull
    private final Rect replyTextLineBounds;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public MessageViewReplyPreview(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final void configureClanTagChiplet(Message message) {
        if (message.getClanTag() == null || message.m277getClanTagGuildIdqOKuAAo() == null) {
            ClanTagChipletView tagChiplet = this.binding.tagChiplet;
            Intrinsics.checkNotNullExpressionValue(tagChiplet, "tagChiplet");
            tagChiplet.setVisibility(8);
        } else {
            ClanTagChipletView.m547configureETwJlQw$default(this.binding.tagChiplet, message.getClanTag(), message.getClanBadgeUrl(), message.m277getClanTagGuildIdqOKuAAo().m1185unboximpl(), null, 0.89f, null, 32, null);
            ClanTagChipletView tagChiplet2 = this.binding.tagChiplet;
            Intrinsics.checkNotNullExpressionValue(tagChiplet2, "tagChiplet");
            tagChiplet2.setVisibility(0);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void configureExecutedCommand_dB0_bEw$lambda$12(ChatEventHandler chatEventHandler, String str, ExecutedCommand executedCommand, View view) {
        chatEventHandler.mo491onTapAvatarx5gers8(str, executedCommand.m437getUserIdre6GcUE());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureExecutedCommand_dB0_bEw$lambda$13(ExecutedCommand executedCommand, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("nickname", executedCommand.getUsername());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureExecutedCommand_dB0_bEw$lambda$14(ChatEventHandler chatEventHandler, String str, LinkContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        chatEventHandler.mo480onLinkClickedntcYbpo(str, it);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureExecutedCommand_dB0_bEw$lambda$15(ChatEventHandler chatEventHandler, CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        chatEventHandler.onTapCommand(it);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureExecutedCommand_dB0_bEw$lambda$16(ChatEventHandler chatEventHandler, CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        chatEventHandler.onLongPressCommand(it);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final LinkStyle configureExecutedCommand_dB0_bEw$lambda$17(ExecutedCommand executedCommand, LinkContentNode it) {
        DiscordFont discordFont;
        Intrinsics.checkNotNullParameter(it, "it");
        LinkContextData target = it.getTarget();
        if (target instanceof LinkContextData.BindUserMenu) {
            Integer linkColor = it.getLinkColor();
            int intValue = linkColor != null ? linkColor.intValue() : ThemeManagerKt.getTheme().getTextLink();
            Integer displayNameFontId = it.getDisplayNameFontId();
            if (displayNameFontId == null || (discordFont = DisplayNameStylesUtils.INSTANCE.getDisplayNameFont(displayNameFontId.intValue())) == null) {
                discordFont = DiscordFont.PrimarySemibold;
            }
            return new LinkStyle(discordFont, intValue, null, null, 12, null);
        }
        if (!(target instanceof LinkContextData.BindTapCommandName)) {
            return new LinkStyle(DiscordFont.PrimarySemibold, 0, null, null, 14, null);
        }
        DiscordFont discordFont2 = DiscordFont.PrimarySemibold;
        ExecutedCommandBackgroundStyles commandNameBackgroundStyles = executedCommand.getCommandNameBackgroundStyles();
        Integer color = commandNameBackgroundStyles != null ? commandNameBackgroundStyles.getColor() : null;
        ExecutedCommandBackgroundStyles commandNameBackgroundStyles2 = executedCommand.getCommandNameBackgroundStyles();
        Integer borderRadius = commandNameBackgroundStyles2 != null ? commandNameBackgroundStyles2.getBorderRadius() : null;
        ExecutedCommandBackgroundStyles commandNameBackgroundStyles3 = executedCommand.getCommandNameBackgroundStyles();
        LinkBackgroundStyle linkBackgroundStyle = new LinkBackgroundStyle(color, borderRadius, commandNameBackgroundStyles3 != null ? commandNameBackgroundStyles3.getSpaceAround() : null);
        Boolean showAppsIcon = executedCommand.getShowAppsIcon();
        Boolean bool = Boolean.TRUE;
        return new LinkStyle(discordFont2, 0, linkBackgroundStyle, Intrinsics.areEqual(showAppsIcon, bool) ? Intrinsics.areEqual(executedCommand.getShowControllerIcon(), bool) ? ReactAsset.GameControllerIcon : ReactAsset.AppsIcon : null, 2, null);
    }

    private final void configureLeadingIcon(Message message) {
        ReactAsset reactAsset = message.isPollResult() ? ReactAsset.PollsIcon : message.getForwardInfo() != null ? ReactAsset.ArrowAngleRightUpIcon : null;
        if (reactAsset != null) {
            SimpleDraweeView replyLeadingIcon = this.binding.replyLeadingIcon;
            Intrinsics.checkNotNullExpressionValue(replyLeadingIcon, "replyLeadingIcon");
            ReactAssetUtilsKt.setReactAsset(replyLeadingIcon, reactAsset);
        }
        SimpleDraweeView replyLeadingIcon2 = this.binding.replyLeadingIcon;
        Intrinsics.checkNotNullExpressionValue(replyLeadingIcon2, "replyLeadingIcon");
        replyLeadingIcon2.setVisibility(reactAsset != null ? 0 : 8);
    }

    public static /* synthetic */ void configureReply$default(MessageViewReplyPreview messageViewReplyPreview, ReferencedMessage referencedMessage, boolean z5, Function0 function0, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            z5 = true;
        }
        messageViewReplyPreview.configureReply(referencedMessage, z5, function0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureReply$lambda$10(MessageViewReplyPreview messageViewReplyPreview, String str, int i5) {
        messageViewReplyPreview.binding.replyText.setDraweeSpanStringBuilder(ReplyUtilsKt.createSystemReplyContent(i5, str));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configureReply$lambda$9(StructurableText structurableText, MessageViewReplyPreview messageViewReplyPreview, Message message, int i5) {
        DraweeSpanStringBuilder spannable;
        DraweeSpanStringBuilder spannable2;
        if (structurableText != null) {
            MessageContentView messageContentView = messageViewReplyPreview.binding.replyText;
            Context context = messageViewReplyPreview.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            String m279getId3Eiw7ao = message.m279getId3Eiw7ao();
            boolean shouldAnimateEmoji = MessageKt.shouldAnimateEmoji(message);
            boolean shouldShowLinkDecorations = MessageKt.shouldShowLinkDecorations(message);
            boolean shouldShowRoleDot = message.getShouldShowRoleDot();
            boolean shouldShowRoleOnName = message.getShouldShowRoleOnName();
            Paint.FontMetrics fontMetrics = messageViewReplyPreview.binding.replyText.getPaint().getFontMetrics();
            Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
            float baselineHeightPx = TextUtilsKt.getBaselineHeightPx(fontMetrics);
            TextPaint paint = messageViewReplyPreview.binding.replyText.getPaint();
            Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
            spannable2 = TextUtilsKt.toSpannable(structurableText, context, m279getId3Eiw7ao, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : false, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new com.discord.chat.presentation.message.view.b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new com.discord.chat.presentation.message.view.c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new com.discord.chat.presentation.message.view.d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : null, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : true, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
            MessageContentView replyText = messageViewReplyPreview.binding.replyText;
            Intrinsics.checkNotNullExpressionValue(replyText, "replyText");
            SpannableExtensionsKt.coverWithSpan(spannable2, new BackgroundSpanDrawer(replyText));
            Unit unit = Unit.a;
            messageContentView.setDraweeSpanStringBuilder(ReplyUtilsKt.createSystemReplyContentFromBuilder(i5, spannable2));
        } else if (message.getContent() != null) {
            MessageContentView messageContentView2 = messageViewReplyPreview.binding.replyText;
            StructurableText content = message.getContent();
            Context context2 = messageViewReplyPreview.getContext();
            Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
            String m279getId3Eiw7ao2 = message.m279getId3Eiw7ao();
            boolean shouldAnimateEmoji2 = MessageKt.shouldAnimateEmoji(message);
            boolean shouldShowLinkDecorations2 = MessageKt.shouldShowLinkDecorations(message);
            boolean shouldForceRevealSpoilers = MessageKt.shouldForceRevealSpoilers(message);
            boolean shouldShowRoleDot2 = message.getShouldShowRoleDot();
            boolean shouldShowRoleOnName2 = message.getShouldShowRoleOnName();
            Paint.FontMetrics fontMetrics2 = messageViewReplyPreview.binding.replyText.getPaint().getFontMetrics();
            Intrinsics.checkNotNullExpressionValue(fontMetrics2, "getFontMetrics(...)");
            float baselineHeightPx2 = TextUtilsKt.getBaselineHeightPx(fontMetrics2);
            TextPaint paint2 = messageViewReplyPreview.binding.replyText.getPaint();
            Intrinsics.checkNotNullExpressionValue(paint2, "getPaint(...)");
            spannable = TextUtilsKt.toSpannable(content, context2, m279getId3Eiw7ao2, shouldAnimateEmoji2, shouldShowLinkDecorations2, shouldShowRoleDot2, shouldShowRoleOnName2, paint2, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : shouldForceRevealSpoilers, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new com.discord.chat.presentation.message.view.b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new com.discord.chat.presentation.message.view.c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new com.discord.chat.presentation.message.view.d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : null, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : true, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx2, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
            MessageContentView replyText2 = messageViewReplyPreview.binding.replyText;
            Intrinsics.checkNotNullExpressionValue(replyText2, "replyText");
            SpannableExtensionsKt.coverWithSpan(spannable, new BackgroundSpanDrawer(replyText2));
            Unit unit2 = Unit.a;
            messageContentView2.setDraweeSpanStringBuilder(ReplyUtilsKt.createReplyContent(i5, spannable));
        } else {
            messageViewReplyPreview.binding.replyText.setText((CharSequence) null);
        }
        return Unit.a;
    }

    private final void configureTrailingIcon(Message message) {
        ReactAsset reactAsset = message.hasStickers() ? ReactAsset.StickerIcon : message.hasCommand() ? ReactAsset.SlashBoxIcon : message.isVoiceMessage() ? ReactAsset.MicrophoneIcon : message.hasAttachmentsOrEmbeds() ? ReactAsset.ImageIcon : null;
        if (reactAsset != null) {
            SimpleDraweeView replyTrailingIcon = this.binding.replyTrailingIcon;
            Intrinsics.checkNotNullExpressionValue(replyTrailingIcon, "replyTrailingIcon");
            ReactAssetUtilsKt.setReactAsset(replyTrailingIcon, reactAsset);
        }
        SimpleDraweeView replyTrailingIcon2 = this.binding.replyTrailingIcon;
        Intrinsics.checkNotNullExpressionValue(replyTrailingIcon2, "replyTrailingIcon");
        replyTrailingIcon2.setVisibility(reactAsset != null ? 0 : 8);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void measureAndSetReplyLeadingViewsHeight() {
        if (this.binding.replyText.getWidth() <= 0) {
            return;
        }
        MessageContentView messageContentView = this.binding.replyText;
        messageContentView.measure(View.MeasureSpec.makeMeasureSpec(messageContentView.getWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(0, 0));
        this.binding.replyText.getLineBounds(0, this.replyTextLineBounds);
        Rect rect = this.replyTextLineBounds;
        int i5 = rect.bottom - rect.top;
        LinearLayout replyLeadingViews = this.binding.replyLeadingViews;
        Intrinsics.checkNotNullExpressionValue(replyLeadingViews, "replyLeadingViews");
        ViewGroup.LayoutParams layoutParams = replyLeadingViews.getLayoutParams();
        if (layoutParams == null) {
            throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.LayoutParams");
        }
        layoutParams.height = Math.max(i5, this.binding.replyText.getLineHeight());
        replyLeadingViews.setLayoutParams(layoutParams);
    }

    public final void clear() {
        ChannelSpineView replySpline = this.binding.replySpline;
        Intrinsics.checkNotNullExpressionValue(replySpline, "replySpline");
        replySpline.setVisibility(8);
        LinearLayout replyLeadingViews = this.binding.replyLeadingViews;
        Intrinsics.checkNotNullExpressionValue(replyLeadingViews, "replyLeadingViews");
        replyLeadingViews.setVisibility(8);
        MessageContentView replyText = this.binding.replyText;
        Intrinsics.checkNotNullExpressionValue(replyText, "replyText");
        replyText.setVisibility(8);
        SimpleDraweeView replyTrailingIcon = this.binding.replyTrailingIcon;
        Intrinsics.checkNotNullExpressionValue(replyTrailingIcon, "replyTrailingIcon");
        replyTrailingIcon.setVisibility(8);
        ClanTagChipletView tagChiplet = this.binding.tagChiplet;
        Intrinsics.checkNotNullExpressionValue(tagChiplet, "tagChiplet");
        tagChiplet.setVisibility(8);
    }

    /* renamed from: configureExecutedCommand-dB0-bEw, reason: not valid java name */
    public final void m583configureExecutedCommanddB0bEw(@NotNull String messageId, @NotNull final ExecutedCommand executedCommand, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldShowRoleDot, boolean shouldShowRoleOnName, @NotNull final ChatEventHandler eventHandler) {
        DraweeSpanStringBuilder spannable;
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(executedCommand, "executedCommand");
        Intrinsics.checkNotNullParameter(eventHandler, "eventHandler");
        ChannelSpineView replySpline = this.binding.replySpline;
        Intrinsics.checkNotNullExpressionValue(replySpline, "replySpline");
        final int i5 = 0;
        replySpline.setVisibility(0);
        MessageContentView replyText = this.binding.replyText;
        Intrinsics.checkNotNullExpressionValue(replyText, "replyText");
        replyText.setVisibility(0);
        LinearLayout replyLeadingViews = this.binding.replyLeadingViews;
        Intrinsics.checkNotNullExpressionValue(replyLeadingViews, "replyLeadingViews");
        replyLeadingViews.setVisibility(0);
        SimpleDraweeView replyAuthorAvatar = this.binding.replyAuthorAvatar;
        Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar, "replyAuthorAvatar");
        replyAuthorAvatar.setVisibility(0);
        TextView replyAuthorName = this.binding.replyAuthorName;
        Intrinsics.checkNotNullExpressionValue(replyAuthorName, "replyAuthorName");
        replyAuthorName.setVisibility(8);
        SimpleDraweeView replyAuthorAvatar2 = this.binding.replyAuthorAvatar;
        Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar2, "replyAuthorAvatar");
        final int i6 = 1;
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(replyAuthorAvatar2, false, new d(eventHandler, messageId, executedCommand, i6), 1, null);
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        this.binding.replyAuthorAvatar.setContentDescription(I18nUtilsKt.i18nFormat(context, I18nMessage.AVATAR_A11Y_LABEL, new Function1() { // from class: com.discord.chat.presentation.message.v
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit configureExecutedCommand_dB0_bEw$lambda$13;
                LinkStyle configureExecutedCommand_dB0_bEw$lambda$17;
                switch (i5) {
                    case 0:
                        configureExecutedCommand_dB0_bEw$lambda$13 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$13(executedCommand, (RenderContext) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$13;
                    default:
                        configureExecutedCommand_dB0_bEw$lambda$17 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$17(executedCommand, (LinkContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$17;
                }
            }
        }));
        SimpleDraweeView replyIcon = this.binding.replyIcon;
        Intrinsics.checkNotNullExpressionValue(replyIcon, "replyIcon");
        replyIcon.setVisibility(8);
        SimpleDraweeView replyTrailingIcon = this.binding.replyTrailingIcon;
        Intrinsics.checkNotNullExpressionValue(replyTrailingIcon, "replyTrailingIcon");
        replyTrailingIcon.setVisibility(8);
        ClanTagChipletView tagChiplet = this.binding.tagChiplet;
        Intrinsics.checkNotNullExpressionValue(tagChiplet, "tagChiplet");
        tagChiplet.setVisibility(8);
        this.binding.replyLeadingViews.measure(0, 0);
        MessageViewReplyPreviewBinding messageViewReplyPreviewBinding = this.binding;
        MessageContentView messageContentView = messageViewReplyPreviewBinding.replyText;
        int measuredWidth = messageViewReplyPreviewBinding.replyLeadingViews.getMeasuredWidth();
        AnnotatedStructurableText content = executedCommand.getContent();
        Context context2 = getContext();
        Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
        Paint.FontMetrics fontMetrics = this.binding.replyText.getPaint().getFontMetrics();
        Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
        float baselineHeightPx = TextUtilsKt.getBaselineHeightPx(fontMetrics);
        TextPaint paint = this.binding.replyText.getPaint();
        Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
        spannable = TextUtilsKt.toSpannable(content, context2, messageId, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : false, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : new w(eventHandler, messageId, i5), (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new com.discord.chat.presentation.message.view.b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new com.discord.chat.presentation.message.view.c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new com.discord.chat.presentation.message.view.d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : new Function1() { // from class: com.discord.chat.presentation.message.x
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit configureExecutedCommand_dB0_bEw$lambda$15;
                Unit configureExecutedCommand_dB0_bEw$lambda$16;
                switch (i5) {
                    case 0:
                        configureExecutedCommand_dB0_bEw$lambda$15 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$15(eventHandler, (CommandMentionContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$15;
                    default:
                        configureExecutedCommand_dB0_bEw$lambda$16 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$16(eventHandler, (CommandMentionContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$16;
                }
            }
        }, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : new Function1() { // from class: com.discord.chat.presentation.message.x
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit configureExecutedCommand_dB0_bEw$lambda$15;
                Unit configureExecutedCommand_dB0_bEw$lambda$16;
                switch (i6) {
                    case 0:
                        configureExecutedCommand_dB0_bEw$lambda$15 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$15(eventHandler, (CommandMentionContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$15;
                    default:
                        configureExecutedCommand_dB0_bEw$lambda$16 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$16(eventHandler, (CommandMentionContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$16;
                }
            }
        }, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : new Function1() { // from class: com.discord.chat.presentation.message.v
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit configureExecutedCommand_dB0_bEw$lambda$13;
                LinkStyle configureExecutedCommand_dB0_bEw$lambda$17;
                switch (i6) {
                    case 0:
                        configureExecutedCommand_dB0_bEw$lambda$13 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$13(executedCommand, (RenderContext) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$13;
                    default:
                        configureExecutedCommand_dB0_bEw$lambda$17 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$17(executedCommand, (LinkContentNode) obj);
                        return configureExecutedCommand_dB0_bEw$lambda$17;
                }
            }
        }, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
        MessageContentView replyText2 = this.binding.replyText;
        Intrinsics.checkNotNullExpressionValue(replyText2, "replyText");
        SpannableExtensionsKt.coverWithSpan(spannable, new BackgroundSpanDrawer(replyText2));
        Unit unit = Unit.a;
        messageContentView.setDraweeSpanStringBuilder(ReplyUtilsKt.createReplyContent(measuredWidth, spannable));
        MessageContentView replyText3 = this.binding.replyText;
        Intrinsics.checkNotNullExpressionValue(replyText3, "replyText");
        NestedScrollOnTouchUtilsKt.enableNestedSpanClickListener(replyText3, true);
        SimpleDraweeView replyAuthorAvatar3 = this.binding.replyAuthorAvatar;
        Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar3, "replyAuthorAvatar");
        SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(replyAuthorAvatar3, executedCommand.getAvatarURL());
    }

    public final void configureReply(@NotNull ReferencedMessage reply, boolean showSpine, @NotNull final Function0<Unit> onClick) {
        Function1 aVar;
        Intrinsics.checkNotNullParameter(reply, "reply");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(this, false, new a6.a(1, onClick), 1, null);
        if (reply instanceof LoadedReferencedMessage) {
            LoadedReferencedMessage loadedReferencedMessage = (LoadedReferencedMessage) reply;
            Message message = loadedReferencedMessage.getMessage();
            StructurableText systemContent = loadedReferencedMessage.getSystemContent();
            configureLeadingIcon(message);
            configureTrailingIcon(message);
            configureClanTagChiplet(message);
            ChannelSpineView replySpline = this.binding.replySpline;
            Intrinsics.checkNotNullExpressionValue(replySpline, "replySpline");
            replySpline.setVisibility(showSpine ? 0 : 8);
            LinearLayout replyLeadingViews = this.binding.replyLeadingViews;
            Intrinsics.checkNotNullExpressionValue(replyLeadingViews, "replyLeadingViews");
            replyLeadingViews.setVisibility(0);
            MessageContentView replyText = this.binding.replyText;
            Intrinsics.checkNotNullExpressionValue(replyText, "replyText");
            replyText.setVisibility(0);
            if (!message.getShouldShowRoleDot() || (message.getRoleColor() == null && message.getRoleColors() == null)) {
                RoleDotView replyRoleDot = this.binding.replyRoleDot;
                Intrinsics.checkNotNullExpressionValue(replyRoleDot, "replyRoleDot");
                replyRoleDot.setVisibility(8);
            } else {
                RoleDotView replyRoleDot2 = this.binding.replyRoleDot;
                Intrinsics.checkNotNullExpressionValue(replyRoleDot2, "replyRoleDot");
                replyRoleDot2.setVisibility(0);
                RoleDotView roleDotView = this.binding.replyRoleDot;
                RoleColors androidColors = RoleColorsKt.toAndroidColors(message.getRoleColors());
                if (androidColors == null) {
                    androidColors = new RoleColors(MessageKt.roleDotColor$default(message, 0, 1, null), (Integer) null, (Integer) null, 6, (DefaultConstructorMarker) null);
                }
                roleDotView.configure(androidColors, 16);
            }
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            String avatarUrl = MessageKt.avatarUrl(message, context);
            if (avatarUrl == null || message.getUsername() == null || message.m275getAuthorIdwUX8bhU() == null) {
                SimpleDraweeView replyAuthorAvatar = this.binding.replyAuthorAvatar;
                Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar, "replyAuthorAvatar");
                replyAuthorAvatar.setVisibility(8);
                TextView replyAuthorName = this.binding.replyAuthorName;
                Intrinsics.checkNotNullExpressionValue(replyAuthorName, "replyAuthorName");
                replyAuthorName.setVisibility(8);
                SimpleDraweeView replyIcon = this.binding.replyIcon;
                Intrinsics.checkNotNullExpressionValue(replyIcon, "replyIcon");
                replyIcon.setVisibility(message.isPollResult() ? 8 : 0);
            } else {
                SimpleDraweeView replyAuthorAvatar2 = this.binding.replyAuthorAvatar;
                Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar2, "replyAuthorAvatar");
                replyAuthorAvatar2.setVisibility(0);
                SimpleDraweeView replyIcon2 = this.binding.replyIcon;
                Intrinsics.checkNotNullExpressionValue(replyIcon2, "replyIcon");
                replyIcon2.setVisibility(8);
                SimpleDraweeView replyAuthorAvatar3 = this.binding.replyAuthorAvatar;
                Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar3, "replyAuthorAvatar");
                SetImageUriWithCachePolicyKt.setImageUriWithCachePolicy(replyAuthorAvatar3, avatarUrl);
                this.binding.replyAuthorAvatar.setContentDescription(null);
                TextView replyAuthorName2 = this.binding.replyAuthorName;
                Intrinsics.checkNotNullExpressionValue(replyAuthorName2, "replyAuthorName");
                replyAuthorName2.setVisibility(0);
                this.binding.replyAuthorName.setText(message.getUsername());
                TextView textView = this.binding.replyAuthorName;
                textView.setTextColor(MessageKt.usernameColor$default(message, 0, 1, null));
                Intrinsics.checkNotNull(textView);
                MessageUtilsKt.clearOrSetRoleColors(textView, message);
                DisplayNameStylesUtils.INSTANCE.applyDisplayNameStyles(textView, message.getDisplayNameStyles());
                Intrinsics.checkNotNull(textView);
            }
            aVar = new com.discord.age_assurance.a(systemContent, this, message, 2);
        } else {
            if (!(reply instanceof SystemReferencedMessage)) {
                throw new fo.n();
            }
            String content = ((SystemReferencedMessage) reply).getContent();
            ChannelSpineView replySpline2 = this.binding.replySpline;
            Intrinsics.checkNotNullExpressionValue(replySpline2, "replySpline");
            replySpline2.setVisibility(showSpine ? 0 : 8);
            LinearLayout replyLeadingViews2 = this.binding.replyLeadingViews;
            Intrinsics.checkNotNullExpressionValue(replyLeadingViews2, "replyLeadingViews");
            replyLeadingViews2.setVisibility(0);
            SimpleDraweeView replyAuthorAvatar4 = this.binding.replyAuthorAvatar;
            Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar4, "replyAuthorAvatar");
            replyAuthorAvatar4.setVisibility(0);
            SimpleDraweeView replyAuthorAvatar5 = this.binding.replyAuthorAvatar;
            Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar5, "replyAuthorAvatar");
            ReactAssetUtilsKt.setReactAsset(replyAuthorAvatar5, ReactAsset.DefaultAvatar0);
            this.binding.replyAuthorAvatar.setContentDescription(null);
            TextView replyAuthorName3 = this.binding.replyAuthorName;
            Intrinsics.checkNotNullExpressionValue(replyAuthorName3, "replyAuthorName");
            replyAuthorName3.setVisibility(8);
            SimpleDraweeView replyIcon3 = this.binding.replyIcon;
            Intrinsics.checkNotNullExpressionValue(replyIcon3, "replyIcon");
            replyIcon3.setVisibility(8);
            this.binding.replyIcon.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundBaseLowest());
            MessageContentView replyText2 = this.binding.replyText;
            Intrinsics.checkNotNullExpressionValue(replyText2, "replyText");
            replyText2.setVisibility(0);
            aVar = new b7.a(10, this, content);
            SimpleDraweeView replyTrailingIcon = this.binding.replyTrailingIcon;
            Intrinsics.checkNotNullExpressionValue(replyTrailingIcon, "replyTrailingIcon");
            replyTrailingIcon.setVisibility(8);
            ClanTagChipletView tagChiplet = this.binding.tagChiplet;
            Intrinsics.checkNotNullExpressionValue(tagChiplet, "tagChiplet");
            tagChiplet.setVisibility(8);
        }
        this.binding.replyLeadingViews.measure(0, 0);
        aVar.invoke(Integer.valueOf(this.binding.replyLeadingViews.getMeasuredWidth()));
        if (!this.binding.replyText.isLaidOut() || this.binding.replyText.isLayoutRequested()) {
            MessageContentView replyText3 = this.binding.replyText;
            Intrinsics.checkNotNullExpressionValue(replyText3, "replyText");
            replyText3.addOnLayoutChangeListener(new View.OnLayoutChangeListener() { // from class: com.discord.chat.presentation.message.MessageViewReplyPreview$configureReply$$inlined$doOnNextLayout$1
                @Override // android.view.View.OnLayoutChangeListener
                public void onLayoutChange(View view, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
                    MessageViewReplyPreviewBinding messageViewReplyPreviewBinding;
                    view.removeOnLayoutChangeListener(this);
                    messageViewReplyPreviewBinding = MessageViewReplyPreview.this.binding;
                    if (messageViewReplyPreviewBinding.replyText.getWidth() <= 0) {
                        return;
                    }
                    MessageViewReplyPreview.this.measureAndSetReplyLeadingViewsHeight();
                    ViewMeasureExtensionsKt.measureAndLayout(MessageViewReplyPreview.this);
                }
            });
        } else {
            measureAndSetReplyLeadingViewsHeight();
        }
        setImportantForAccessibility(1);
        s0.p(this, new androidx.core.view.b() { // from class: com.discord.chat.presentation.message.MessageViewReplyPreview$configureReply$6
            @Override // androidx.core.view.b
            public void onInitializeAccessibilityNodeInfo(View host, AccessibilityNodeInfoCompat info) {
                MessageViewReplyPreviewBinding messageViewReplyPreviewBinding;
                MessageViewReplyPreviewBinding messageViewReplyPreviewBinding2;
                Intrinsics.checkNotNullParameter(host, "host");
                Intrinsics.checkNotNullParameter(info, "info");
                super.onInitializeAccessibilityNodeInfo(host, info);
                info.o("android.widget.Button");
                Context context2 = MessageViewReplyPreview.this.getContext();
                Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
                SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(I18nUtilsKt.i18nFormat$default(context2, I18nMessage.MOBILE_REPLY_PREVIEW_A11Y_LABEL, null, 2, null));
                spannableStringBuilder.append((CharSequence) ", ");
                messageViewReplyPreviewBinding = MessageViewReplyPreview.this.binding;
                spannableStringBuilder.append(messageViewReplyPreviewBinding.replyAuthorName.getText());
                spannableStringBuilder.append((CharSequence) ", ");
                messageViewReplyPreviewBinding2 = MessageViewReplyPreview.this.binding;
                spannableStringBuilder.append(messageViewReplyPreviewBinding2.replyText.getText());
                info.s(spannableStringBuilder);
                Context context3 = MessageViewReplyPreview.this.getContext();
                Intrinsics.checkNotNullExpressionValue(context3, "getContext(...)");
                info.b(new androidx.core.view.accessibility.a(16, I18nUtilsKt.i18nFormat$default(context3, I18nMessage.MOBILE_SCROLL_TO_MESSAGE_ACTION_A11Y_LABEL, null, 2, null)));
            }

            @Override // androidx.core.view.b
            public boolean performAccessibilityAction(View host, int action, Bundle args) {
                Intrinsics.checkNotNullParameter(host, "host");
                if (action == 16) {
                    onClick.invoke();
                }
                return super.performAccessibilityAction(host, action, args);
            }
        });
    }

    @Override // com.discord.chat.presentation.spine.SpineParentMessage
    @NotNull
    public View getSpineOriginView() {
        SimpleDraweeView simpleDraweeView = this.binding.replyAuthorAvatar;
        Intrinsics.checkNotNull(simpleDraweeView);
        if (simpleDraweeView.getVisibility() != 0) {
            simpleDraweeView = null;
        }
        if (simpleDraweeView != null) {
            return simpleDraweeView;
        }
        SimpleDraweeView replyIcon = this.binding.replyIcon;
        Intrinsics.checkNotNullExpressionValue(replyIcon, "replyIcon");
        return replyIcon;
    }

    public /* synthetic */ MessageViewReplyPreview(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MessageViewReplyPreview(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        MessageViewReplyPreviewBinding inflate = MessageViewReplyPreviewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        this.replyTextLineBounds = new Rect();
        SimpleDraweeView simpleDraweeView = inflate.replyIcon;
        if (!simpleDraweeView.isInEditMode()) {
            Intrinsics.checkNotNull(simpleDraweeView);
            ReactAssetUtilsKt.setReactAsset(simpleDraweeView, ReactAsset.ArrowAngleLeftUpIcon);
            ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(ThemeManagerKt.getTheme().getInteractiveTextDefault()));
            ViewBackgroundUtilsKt.setBackgroundOval$default(simpleDraweeView, ThemeManagerKt.getTheme().getBackgroundBaseLowest(), 0, 2, null);
        }
        TextView replyAuthorName = inflate.replyAuthorName;
        Intrinsics.checkNotNullExpressionValue(replyAuthorName, "replyAuthorName");
        DiscordFontUtilsKt.setDiscordFont(replyAuthorName, DiscordFont.PrimarySemibold);
        TextView replyAuthorName2 = inflate.replyAuthorName;
        Intrinsics.checkNotNullExpressionValue(replyAuthorName2, "replyAuthorName");
        SetTextSizeSpKt.setTextSizeSp(replyAuthorName2, 12.0f);
        inflate.replyAuthorName.setMaxWidth((int) (getResources().getDisplayMetrics().widthPixels * 0.4d));
        SimpleDraweeView replyLeadingIcon = inflate.replyLeadingIcon;
        Intrinsics.checkNotNullExpressionValue(replyLeadingIcon, "replyLeadingIcon");
        ColorUtilsKt.setTintColor(replyLeadingIcon, Integer.valueOf(ThemeManagerKt.getTheme().getTextSubtle()));
        SimpleDraweeView replyTrailingIcon = inflate.replyTrailingIcon;
        Intrinsics.checkNotNullExpressionValue(replyTrailingIcon, "replyTrailingIcon");
        ColorUtilsKt.setTintColor(replyTrailingIcon, Integer.valueOf(ThemeManagerKt.getTheme().getTextSubtle()));
        SimpleDraweeView replyAuthorAvatar = inflate.replyAuthorAvatar;
        Intrinsics.checkNotNullExpressionValue(replyAuthorAvatar, "replyAuthorAvatar");
        ViewClippingUtilsKt.clipToCircle(replyAuthorAvatar);
        MessageContentView messageContentView = inflate.replyText;
        Intrinsics.checkNotNull(messageContentView);
        DiscordFontUtilsKt.setDiscordFont(messageContentView, DiscordFont.PrimaryMedium);
        SetTextSizeSpKt.setTextSizeSp(messageContentView, 12.0f);
        messageContentView.setTextColor(ThemeManagerKt.getTheme().getInteractiveTextDefault());
        float dimension = getResources().getDimension(R.dimen.message_start_guideline);
        float f2 = 2;
        float dimension2 = (dimension / f2) - (getResources().getDimension(com.discord.channel_spine.R.dimen.spine_width) / f2);
        float dimension3 = (dimension - getResources().getDimension(R.dimen.message_reply_leading_views_margin_start)) - dimension2;
        inflate.replySpline.configureAsReplySpline();
        ChannelSpineView replySpline = inflate.replySpline;
        Intrinsics.checkNotNullExpressionValue(replySpline, "replySpline");
        ViewGroup.LayoutParams layoutParams = replySpline.getLayoutParams();
        if (layoutParams != null) {
            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams;
            marginLayoutParams.width = (int) dimension3;
            marginLayoutParams.setMarginStart((int) dimension2);
            replySpline.setLayoutParams(marginLayoutParams);
            return;
        }
        throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.MarginLayoutParams");
    }
}
