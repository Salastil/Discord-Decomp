package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.graphics.Paint;
import android.text.TextPaint;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.Space;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.s0;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.embed.Embed;
import com.discord.chat.bridge.embed.EmbedAuthor;
import com.discord.chat.bridge.embed.EmbedFailureState;
import com.discord.chat.bridge.embed.EmbedField;
import com.discord.chat.bridge.embed.EmbedFooter;
import com.discord.chat.bridge.embed.EmbedProvider;
import com.discord.chat.bridge.embed.EmbedThumbnail;
import com.discord.chat.bridge.embed.EmbedType;
import com.discord.chat.bridge.embed.EmbedUtilsKt;
import com.discord.chat.bridge.spoiler.SpoilerConfig;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.databinding.EmbedViewBinding;
import com.discord.chat.presentation.media.MediaContainingViewResizer;
import com.discord.chat.presentation.message.messagepart.MessageMargins;
import com.discord.chat.presentation.message.utils.GetMediaImagePlaceholderStatesListenerKt;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.image.fresco.SetOptionalImageUrlKt;
import com.discord.image.fresco.SimpleDraweeSpanTextViewUtilsKt;
import com.discord.media_player.MediaSource;
import com.discord.misc.utilities.view.ViewClippingUtilsKt;
import com.discord.misc.utilities.view.ViewGroupUtilsKt;
import com.discord.misc.utilities.view.ViewUtilsKt;
import com.discord.primitives.MessageId;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.span.utilities.BackgroundSpanDrawer;
import com.discord.span.utilities.SpannableExtensionsKt;
import com.discord.theme.R;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.span.SimpleDraweeSpanTextView;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000Ô\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\r\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001e\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u00002\u00020\u0001B\u001d\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0006\u0010\u0007J\u0095\u0004\u0010@\u001a\u00020\u001d2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0015\u001a\u00020\u00142\u0006\u0010\u0016\u001a\u00020\u00142\u0006\u0010\u0017\u001a\u00020\u00142\u0006\u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u00142\b\b\u0002\u0010\u001a\u001a\u00020\u00142 \u0010\u001e\u001a\u001c\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d0\u001b2 \u0010\u001f\u001a\u001c\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d0\u001b2\u001c\u0010\"\u001a\u0018\u0012\u0006\u0012\u0004\u0018\u00010!\u0012\u0006\u0012\u0004\u0018\u00010\u0010\u0012\u0004\u0012\u00020\u001d0 2\b\u0010$\u001a\u0004\u0018\u00010#2\u0018\u0010&\u001a\u0014\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u001d0 2\u0012\u0010(\u001a\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u001d0'2\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'2\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u001d0+2\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020-\u0012\u0004\u0012\u00020\u001d0'2\"\u0010/\u001a\u001e\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d0\u001b2:\u00101\u001a6\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d002\u0012\u00103\u001a\u000e\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001d0'2\u0012\u00105\u001a\u000e\u0012\u0004\u0012\u000204\u0012\u0004\u0012\u00020\u001d0'2\u0012\u00106\u001a\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0004\u0012\u00020\u001d0'2\b\u00108\u001a\u0004\u0018\u0001072\u0006\u00109\u001a\u00020!2\u0006\u0010:\u001a\u00020\u00142\u0006\u0010;\u001a\u00020\u00142\u0006\u0010<\u001a\u00020\u00142\u0006\u0010=\u001a\u00020\u0014¢\u0006\u0004\b>\u0010?J9\u0010C\u001a\u00020\u001d2\b\u0010A\u001a\u0004\u0018\u00010)2\n\b\u0001\u0010B\u001a\u0004\u0018\u00010\u00102\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'H\u0002¢\u0006\u0004\bC\u0010DJK\u0010L\u001a\u00020\u001d2\u0006\u0010E\u001a\u00020\u001c2\b\u0010G\u001a\u0004\u0018\u00010F2\n\b\u0001\u0010H\u001a\u0004\u0018\u00010\u00102\b\u0010J\u001a\u0004\u0018\u00010I2\u0012\u0010K\u001a\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0004\u0012\u00020\u001d0'H\u0002¢\u0006\u0004\bL\u0010MJ+\u0010P\u001a\u00020\u001d2\b\u0010N\u001a\u0004\u0018\u00010\u001c2\b\u0010O\u001a\u0004\u0018\u00010\u001c2\u0006\u0010\u0015\u001a\u00020\u0014H\u0002¢\u0006\u0004\bP\u0010QJ-\u0010S\u001a\u00020\u001d2\b\u0010R\u001a\u0004\u0018\u00010I2\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'H\u0002¢\u0006\u0004\bS\u0010TJ_\u0010[\u001a\u00020\u001d2\b\u0010V\u001a\u0004\u0018\u00010U2\u0006\u0010\u0015\u001a\u00020\u00142\u0006\u0010\u000f\u001a\u00020\u000e2\b\u0010W\u001a\u0004\u0018\u00010\u001c2\b\u0010X\u001a\u0004\u0018\u00010\u001c2 \u0010\u001e\u001a\u001c\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d0\u001bH\u0002¢\u0006\u0004\bY\u0010ZJ?\u0010_\u001a\u00020\u001d2\u0006\u0010\\\u001a\u00020\u001c2\b\u0010]\u001a\u0004\u0018\u00010F2\b\b\u0001\u0010^\u001a\u00020\u00102\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'H\u0002¢\u0006\u0004\b_\u0010`J»\u0002\u0010g\u001a\u00020\u001d2\f\u0010c\u001a\b\u0012\u0004\u0012\u00020b0a2\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0016\u001a\u00020\u00142\u0006\u0010\u0017\u001a\u00020\u00142\u0006\u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u00142\b\b\u0002\u0010\u001a\u001a\u00020\u00142\u0018\u0010&\u001a\u0014\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u001d0 2\u0012\u0010d\u001a\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u001d0'2\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'2\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u001d0+2\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020-\u0012\u0004\u0012\u00020\u001d0'2\"\u0010/\u001a\u001e\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d0\u001b2:\u00101\u001a6\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0006\u0012\u0004\u0018\u00010\u001c\u0012\u0004\u0012\u00020\u001d002\u0012\u00103\u001a\u000e\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u001d0'2\u0012\u00106\u001a\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0004\u0012\u00020\u001d0'H\u0002¢\u0006\u0004\be\u0010fJ#\u0010j\u001a\u00020\u001d2\u0006\u0010h\u001a\u00020\u00142\n\b\u0002\u0010i\u001a\u0004\u0018\u00010\u0010H\u0002¢\u0006\u0004\bj\u0010kJ\u001b\u0010m\u001a\u00020\u001d2\n\b\u0001\u0010l\u001a\u0004\u0018\u00010\u0010H\u0002¢\u0006\u0004\bm\u0010nJ7\u0010t\u001a\u00020\u001d2\u0006\u0010p\u001a\u00020o2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010r\u001a\u00020q2\u0006\u0010\u0012\u001a\u00020\u00102\u0006\u0010s\u001a\u00020\u0010H\u0002¢\u0006\u0004\bt\u0010uJ?\u0010x\u001a\u00020\u001d2\b\u0010v\u001a\u0004\u0018\u00010\u001c2\b\u0010w\u001a\u0004\u0018\u00010\u001c2\u0012\u0010*\u001a\u000e\u0012\u0004\u0012\u00020)\u0012\u0004\u0012\u00020\u001d0'2\u0006\u0010\u0015\u001a\u00020\u0014H\u0002¢\u0006\u0004\bx\u0010yJ;\u0010~\u001a\u00020\u001d2\b\u0010z\u001a\u0004\u0018\u00010\u001c2\b\b\u0001\u0010{\u001a\u00020\u00102\n\b\u0002\u0010|\u001a\u0004\u0018\u00010\u001c2\n\b\u0003\u0010}\u001a\u0004\u0018\u00010\u0010H\u0002¢\u0006\u0004\b~\u0010\u007fJ5\u0010\u0081\u0001\u001a\u00020\u001d2\b\u00108\u001a\u0004\u0018\u0001072\u0007\u0010\u0080\u0001\u001a\u00020\u00142\u0006\u0010;\u001a\u00020\u00142\u0006\u0010<\u001a\u00020\u0014H\u0002¢\u0006\u0006\b\u0081\u0001\u0010\u0082\u0001J\u0012\u0010\u0083\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0083\u0001\u0010\u0084\u0001J\u0012\u0010\u0085\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0085\u0001\u0010\u0084\u0001J\u0012\u0010\u0086\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0086\u0001\u0010\u0084\u0001J\u0012\u0010\u0087\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0087\u0001\u0010\u0084\u0001J\u0012\u0010\u0088\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0088\u0001\u0010\u0084\u0001J\u0012\u0010\u0089\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u0089\u0001\u0010\u0084\u0001J\u0012\u0010\u008a\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008a\u0001\u0010\u0084\u0001J\u0012\u0010\u008b\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008b\u0001\u0010\u0084\u0001J\u0012\u0010\u008c\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008c\u0001\u0010\u0084\u0001J\u0012\u0010\u008d\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008d\u0001\u0010\u0084\u0001J\u0012\u0010\u008e\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008e\u0001\u0010\u0084\u0001J\u0012\u0010\u008f\u0001\u001a\u00020\u001dH\u0002¢\u0006\u0006\b\u008f\u0001\u0010\u0084\u0001R\u0018\u0010\u0091\u0001\u001a\u00030\u0090\u00018\u0002X\u0082\u0004¢\u0006\b\n\u0006\b\u0091\u0001\u0010\u0092\u0001R\u0019\u0010\u000b\u001a\u0004\u0018\u00010\n8\u0002@\u0002X\u0082\u000e¢\u0006\u0007\n\u0005\b\u000b\u0010\u0093\u0001R\u0019\u0010\u0094\u0001\u001a\u00020\u00108\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\b\u0094\u0001\u0010\u0095\u0001¨\u0006\u0096\u0001"}, d2 = {"Lcom/discord/chat/presentation/message/view/EmbedView;", "Landroid/widget/FrameLayout;", "Landroid/content/Context;", "context", "Landroid/util/AttributeSet;", "attrs", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "Lcom/discord/chat/presentation/message/messagepart/MessageMargins;", "margins", "Lcom/discord/chat/bridge/embed/Embed;", "embed", "Lcom/discord/primitives/ChannelId;", "channelId", "Lcom/discord/primitives/MessageId;", "messageId", "", "constrainedWidth", "maxHeightPx", "radiusPx", "", "shouldAutoPlayGifs", "shouldAnimateEmoji", "shouldShowLinkDecorations", "shouldShowRoleDot", "shouldShowRoleOnName", "shouldForceRevealSpoilers", "Lkotlin/Function3;", "", "", "onTitleLinkClicked", "onAuthorLinkClicked", "Lkotlin/Function2;", "", "onMediaClicked", "Landroid/view/View$OnLongClickListener;", "onMediaLongClicked", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "onLinkClicked", "Lkotlin/Function1;", "onLongTapLinkNode", "", "onTapCopyText", "Lkotlin/Function0;", "onTapSpoiler", "Lcom/discord/chat/bridge/contentnode/EmojiContentNode;", "onTapEmoji", "onTapChannel", "Lkotlin/Function6;", "onTapMention", "Lcom/discord/chat/bridge/contentnode/CommandMentionContentNode;", "onTapCommand", "Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "onTapGameMention", "onTapTimestamp", "Lcom/discord/chat/bridge/spoiler/SpoilerConfig;", "spoilerConfig", "portal", "isObscure", "obscureHideControls", "obscureIsOpaque", "isForwardedContent", "setEmbed-Km7rQmo", "(Lcom/discord/chat/presentation/message/messagepart/MessageMargins;Lcom/discord/chat/bridge/embed/Embed;JLjava/lang/String;IIIZZZZZZLkotlin/jvm/functions/Function3;Lkotlin/jvm/functions/Function3;Lkotlin/jvm/functions/Function2;Landroid/view/View$OnLongClickListener;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function3;Lkotlin/jvm/functions/Function6;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lcom/discord/chat/bridge/spoiler/SpoilerConfig;DZZZZ)V", "setEmbed", "provider", "providerColor", "setProvider", "(Ljava/lang/CharSequence;Ljava/lang/Integer;Lkotlin/jvm/functions/Function1;)V", "rawTitle", "Lcom/facebook/drawee/span/DraweeSpanStringBuilder;", AlertFragment.ARG_TITLE, "titleColor", "Landroid/view/View$OnClickListener;", "onClickListener", "onLongClickListener", "setTitle", "(Ljava/lang/String;Lcom/facebook/drawee/span/DraweeSpanStringBuilder;Ljava/lang/Integer;Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function1;)V", "authorUrl", "authorName", "setAuthor", "(Ljava/lang/String;Ljava/lang/String;Z)V", "listener", "setAuthorOnClickListener", "(Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function1;)V", "Lcom/discord/chat/bridge/embed/EmbedThumbnail;", "thumbnail", "embedUrl", "embedTitle", "setThumbnail-xk5Fe9g", "(Lcom/discord/chat/bridge/embed/EmbedThumbnail;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/functions/Function3;)V", "setThumbnail", "rawDescription", "description", "descriptionColor", "setDescription", "(Ljava/lang/String;Lcom/facebook/drawee/span/DraweeSpanStringBuilder;ILkotlin/jvm/functions/Function1;)V", "", "Lcom/discord/chat/bridge/embed/EmbedField;", "fields", "onLinkLongClicked", "setFields-KZKlO-o", "(Ljava/util/List;Ljava/lang/String;ZZZZZLkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function3;Lkotlin/jvm/functions/Function6;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;)V", "setFields", "isBackgroundColorEnabled", ViewProps.BACKGROUND_COLOR, "setBackgroundColorEnabled", "(ZLjava/lang/Integer;)V", ViewProps.COLOR, "setBorder", "(Ljava/lang/Integer;)V", "Lcom/discord/chat/presentation/message/view/EmbedViewResizingMediaView;", "mediaView", "Lcom/discord/media_player/MediaSource;", "mediaSource", "maxWidthPx", "setMediaEmbed", "(Lcom/discord/chat/presentation/message/view/EmbedViewResizingMediaView;Lcom/discord/chat/bridge/embed/Embed;Lcom/discord/media_player/MediaSource;II)V", "imageUrl", "text", "setFooter", "(Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/functions/Function1;Z)V", "error", "textColor", "iconURL", "iconTint", "setError", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Integer;)V", "isObscureAwaitingScan", "configureSpoiler", "(Lcom/discord/chat/bridge/spoiler/SpoilerConfig;ZZZ)V", "reset", "()V", "clearInlineMedia", "clearBorder", "clearThumbnail", "clearProvider", "clearAuthor", "clearTitle", "clearDescription", "clearFields", "clearMedia", "clearFooter", "clearError", "Lcom/discord/chat/databinding/EmbedViewBinding;", "binding", "Lcom/discord/chat/databinding/EmbedViewBinding;", "Lcom/discord/chat/bridge/embed/Embed;", "maxThumbnailSize", "I", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nEmbedView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 EmbedView.kt\ncom/discord/chat/presentation/message/view/EmbedView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 5 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,720:1\n257#2,2:721\n257#2,2:726\n257#2,2:729\n257#2,2:734\n257#2,2:736\n257#2,2:738\n257#2,2:740\n257#2,2:742\n257#2,2:745\n257#2,2:748\n257#2,2:750\n257#2,2:752\n257#2,2:754\n257#2,2:756\n257#2,2:758\n257#2,2:760\n1878#3,3:723\n1878#3,3:731\n1#4:728\n13472#5:744\n13473#5:747\n*S KotlinDebug\n*F\n+ 1 EmbedView.kt\ncom/discord/chat/presentation/message/view/EmbedView\n*L\n144#1:721,2\n408#1:726,2\n501#1:729,2\n564#1:734,2\n578#1:736,2\n593#1:738,2\n622#1:740,2\n635#1:742,2\n661#1:745,2\n670#1:748,2\n685#1:750,2\n698#1:752,2\n704#1:754,2\n711#1:756,2\n712#1:758,2\n717#1:760,2\n304#1:723,3\n503#1:731,3\n658#1:744\n658#1:747\n*E\n"})
/* loaded from: classes.dex */
public final class EmbedView extends FrameLayout {

    @NotNull
    private final EmbedViewBinding binding;
    private Embed embed;
    private int maxThumbnailSize;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[EmbedType.values().length];
            try {
                iArr[EmbedType.Rich.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public EmbedView(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final void clearAuthor() {
        TextView authorName = this.binding.authorName;
        Intrinsics.checkNotNullExpressionValue(authorName, "authorName");
        ViewUtilsKt.setOptionalText(authorName, null);
        SimpleDraweeView authorAvatar = this.binding.authorAvatar;
        Intrinsics.checkNotNullExpressionValue(authorAvatar, "authorAvatar");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(authorAvatar, null, null, null, null, null, null, 62, null);
        LinearLayout authorContainer = this.binding.authorContainer;
        Intrinsics.checkNotNullExpressionValue(authorContainer, "authorContainer");
        authorContainer.setVisibility(8);
    }

    private final void clearBorder() {
        View border = this.binding.border;
        Intrinsics.checkNotNullExpressionValue(border, "border");
        border.setVisibility(8);
    }

    private final void clearDescription() {
        SimpleDraweeSpanTextView description = this.binding.description;
        Intrinsics.checkNotNullExpressionValue(description, "description");
        SimpleDraweeSpanTextViewUtilsKt.setOptionalText(description, null);
    }

    private final void clearError() {
        TextView error = this.binding.error;
        Intrinsics.checkNotNullExpressionValue(error, "error");
        ViewUtilsKt.setOptionalText(error, null);
        SimpleDraweeView errorIcon = this.binding.errorIcon;
        Intrinsics.checkNotNullExpressionValue(errorIcon, "errorIcon");
        errorIcon.setVisibility(8);
    }

    private final void clearFields() {
        LinearLayout fieldsContainer = this.binding.fieldsContainer;
        Intrinsics.checkNotNullExpressionValue(fieldsContainer, "fieldsContainer");
        fieldsContainer.setVisibility(8);
    }

    private final void clearFooter() {
        TextView footerText = this.binding.footerText;
        Intrinsics.checkNotNullExpressionValue(footerText, "footerText");
        ViewUtilsKt.setOptionalText(footerText, null);
        SimpleDraweeView footerAvatar = this.binding.footerAvatar;
        Intrinsics.checkNotNullExpressionValue(footerAvatar, "footerAvatar");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(footerAvatar, null, null, null, null, null, null, 62, null);
        LinearLayout footerContainer = this.binding.footerContainer;
        Intrinsics.checkNotNullExpressionValue(footerContainer, "footerContainer");
        footerContainer.setVisibility(8);
        Space spacer = this.binding.spacer;
        Intrinsics.checkNotNullExpressionValue(spacer, "spacer");
        spacer.setVisibility(0);
    }

    private final void clearInlineMedia() {
        EmbedViewBinding embedViewBinding = this.binding;
        EmbedViewResizingMediaView[] embedViewResizingMediaViewArr = {embedViewBinding.inlineMediaView, embedViewBinding.inlineMediaView2, embedViewBinding.inlineMediaView3, embedViewBinding.inlineMediaView4};
        for (int i5 = 0; i5 < 4; i5++) {
            EmbedViewResizingMediaView embedViewResizingMediaView = embedViewResizingMediaViewArr[i5];
            MediaView.setMediaData$default(embedViewResizingMediaView, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048574, null);
            embedViewResizingMediaView.setOnMediaClickListeners(null, null);
            Intrinsics.checkNotNull(embedViewResizingMediaView);
            embedViewResizingMediaView.setVisibility(8);
            ViewGroup.LayoutParams layoutParams = embedViewResizingMediaView.getLayoutParams();
            layoutParams.width = 0;
            layoutParams.height = 0;
            embedViewResizingMediaView.setLayoutParams(layoutParams);
        }
    }

    private final void clearMedia() {
        EmbedViewResizingMediaView embedViewResizingMediaView = this.binding.mediaView;
        MediaView.setMediaData$default(embedViewResizingMediaView, null, false, false, false, null, false, null, null, 0, false, false, false, 0, null, null, null, null, null, null, null, 1048574, null);
        Intrinsics.checkNotNull(embedViewResizingMediaView);
        embedViewResizingMediaView.setVisibility(8);
    }

    private final void clearProvider() {
        SimpleDraweeSpanTextView provider = this.binding.provider;
        Intrinsics.checkNotNullExpressionValue(provider, "provider");
        SimpleDraweeSpanTextViewUtilsKt.setOptionalText(provider, null);
    }

    private final void clearThumbnail() {
        SimpleDraweeView thumbnail = this.binding.thumbnail;
        Intrinsics.checkNotNullExpressionValue(thumbnail, "thumbnail");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(thumbnail, null, null, null, null, null, null, 62, null);
        SimpleDraweeView thumbnail2 = this.binding.thumbnail;
        Intrinsics.checkNotNullExpressionValue(thumbnail2, "thumbnail");
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(thumbnail2, false, null, 1, null);
    }

    private final void clearTitle() {
        SimpleDraweeSpanTextView title = this.binding.title;
        Intrinsics.checkNotNullExpressionValue(title, "title");
        SimpleDraweeSpanTextViewUtilsKt.setOptionalText(title, null);
        SimpleDraweeSpanTextView title2 = this.binding.title;
        Intrinsics.checkNotNullExpressionValue(title2, "title");
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(title2, false, null, 1, null);
    }

    private final void configureSpoiler(SpoilerConfig spoilerConfig, boolean isObscureAwaitingScan, boolean obscureHideControls, boolean obscureIsOpaque) {
        this.binding.spoiler.configure(spoilerConfig, this);
        this.binding.spoiler.handleObscureAwaitingScan(isObscureAwaitingScan);
        this.binding.spoiler.setRevealButtonVisible(!obscureHideControls);
        this.binding.spoiler.setOpaqueBackgroundVisible(obscureIsOpaque);
        FrameLayout imageBlurBg = this.binding.imageBlurBg;
        Intrinsics.checkNotNullExpressionValue(imageBlurBg, "imageBlurBg");
        imageBlurBg.setVisibility(this.binding.spoiler.getIsOverlayVisible() ? 0 : 8);
    }

    private final void reset() {
        clearProvider();
        clearTitle();
        clearDescription();
        clearAuthor();
        clearFields();
        clearInlineMedia();
        clearThumbnail();
        clearBorder();
        clearMedia();
        clearFooter();
        clearError();
    }

    private final void setAuthor(String authorUrl, String authorName, boolean shouldAutoPlayGifs) {
        LinearLayout authorContainer = this.binding.authorContainer;
        Intrinsics.checkNotNullExpressionValue(authorContainer, "authorContainer");
        authorContainer.setVisibility((authorUrl != null && !StringsKt.K(authorUrl)) || (authorName != null && !StringsKt.K(authorName)) ? 0 : 8);
        TextView authorName2 = this.binding.authorName;
        Intrinsics.checkNotNullExpressionValue(authorName2, "authorName");
        ViewUtilsKt.setOptionalText(authorName2, authorName);
        SimpleDraweeView authorAvatar = this.binding.authorAvatar;
        Intrinsics.checkNotNullExpressionValue(authorAvatar, "authorAvatar");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(authorAvatar, authorUrl, Boolean.valueOf(shouldAutoPlayGifs), null, null, null, null, 60, null);
    }

    private final void setAuthorOnClickListener(View.OnClickListener listener, Function1<? super CharSequence, Unit> onTapCopyText) {
        TextView textView = this.binding.authorName;
        Intrinsics.checkNotNull(textView);
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(textView, false, listener, 1, null);
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(textView, false, new com.discord.chat.presentation.message.t(1, onTapCopyText, this), 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setAuthorOnClickListener$lambda$22$lambda$21(Function1 function1, EmbedView embedView, View view) {
        CharSequence text = embedView.binding.authorName.getText();
        Intrinsics.checkNotNullExpressionValue(text, "getText(...)");
        function1.invoke(text);
        return true;
    }

    private final void setBackgroundColorEnabled(boolean isBackgroundColorEnabled, Integer backgroundColor) {
        if (isBackgroundColorEnabled) {
            this.binding.getRoot().setBackgroundColor(backgroundColor != null ? backgroundColor.intValue() : ThemeManagerKt.getTheme().getEmbedBackground());
        } else {
            this.binding.getRoot().setBackgroundColor(0);
        }
    }

    public static /* synthetic */ void setBackgroundColorEnabled$default(EmbedView embedView, boolean z5, Integer num, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            num = null;
        }
        embedView.setBackgroundColorEnabled(z5, num);
    }

    private final void setBorder(Integer color) {
        if (color != null) {
            this.binding.border.setBackgroundColor(color.intValue());
        }
        View border = this.binding.border;
        Intrinsics.checkNotNullExpressionValue(border, "border");
        border.setVisibility(color != null ? 0 : 8);
    }

    private final void setDescription(String rawDescription, DraweeSpanStringBuilder description, int descriptionColor, Function1<? super CharSequence, Unit> onTapCopyText) {
        SimpleDraweeSpanTextView simpleDraweeSpanTextView = this.binding.description;
        Intrinsics.checkNotNull(simpleDraweeSpanTextView);
        if (description != null) {
            SpannableExtensionsKt.coverWithSpan(description, new BackgroundSpanDrawer(simpleDraweeSpanTextView));
        } else {
            description = null;
        }
        SimpleDraweeSpanTextViewUtilsKt.setOptionalText(simpleDraweeSpanTextView, description);
        simpleDraweeSpanTextView.setTextColor(descriptionColor);
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(simpleDraweeSpanTextView, false, new i(4, rawDescription, onTapCopyText), 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setDescription$lambda$28$lambda$27(Function1 function1, String str, View view) {
        function1.invoke(str);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setEmbed_Km7rQmo$lambda$11$lambda$10(Function2 function2, MediaSource mediaSource, int i5, View view) {
        Double portal = mediaSource.getPortal();
        if (portal == null || !mediaSource.getIsValid()) {
            portal = null;
        }
        function2.invoke(portal, Integer.valueOf(i5));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setEmbed_Km7rQmo$lambda$14$lambda$13(Function2 function2, MediaSource mediaSource, boolean z5, EmbedView embedView, View view) {
        Double portal = mediaSource.getPortal();
        if (portal == null || !mediaSource.getIsValid()) {
            portal = null;
        }
        function2.invoke(portal, null);
        if (z5) {
            embedView.binding.spoiler.makeObscureHideButtonHidden();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setEmbed_Km7rQmo$lambda$3$lambda$2(Function2 function2, MediaSource mediaSource, boolean z5, EmbedView embedView, View view) {
        Double portal = mediaSource.getPortal();
        if (portal == null || !mediaSource.getIsValid()) {
            portal = null;
        }
        function2.invoke(portal, null);
        if (z5) {
            embedView.binding.spoiler.makeObscureHideButtonHidden();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setEmbed_Km7rQmo$lambda$5$lambda$4(Function3 function3, String str, String str2, DraweeSpanStringBuilder draweeSpanStringBuilder, View view) {
        MessageId m1189boximpl = MessageId.m1189boximpl(str);
        String obj = draweeSpanStringBuilder != null ? draweeSpanStringBuilder.toString() : null;
        if (obj == null) {
            obj = "";
        }
        function3.invoke(m1189boximpl, str2, obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setEmbed_Km7rQmo$lambda$6(Function2 function2, String str, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        function2.invoke(MessageId.m1189boximpl(str), node);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setEmbed_Km7rQmo$lambda$8$lambda$7(Function3 function3, String str, Embed embed, View view) {
        function3.invoke(MessageId.m1189boximpl(str), embed.getAuthor().getUrl(), embed.getAuthor().getName());
    }

    private final void setError(String error, int textColor, String iconURL, Integer iconTint) {
        TextView textView = this.binding.error;
        Intrinsics.checkNotNull(textView);
        ViewUtilsKt.setOptionalText(textView, error);
        DiscordFontUtilsKt.setDiscordFont(textView, DiscordFont.PrimaryMedium);
        textView.setTextColor(textColor);
        SimpleDraweeView errorIcon = this.binding.errorIcon;
        Intrinsics.checkNotNullExpressionValue(errorIcon, "errorIcon");
        if (iconTint != null) {
            textColor = iconTint.intValue();
        }
        ColorUtilsKt.setTintColor(errorIcon, Integer.valueOf(textColor));
        SimpleDraweeView errorIcon2 = this.binding.errorIcon;
        Intrinsics.checkNotNullExpressionValue(errorIcon2, "errorIcon");
        ReactAssetUtilsKt.setOptionalReactImageUrl(errorIcon2, iconURL);
        SimpleDraweeView errorIcon3 = this.binding.errorIcon;
        Intrinsics.checkNotNullExpressionValue(errorIcon3, "errorIcon");
        errorIcon3.setVisibility(error == null || StringsKt.K(error) ? 8 : 0);
    }

    public static /* synthetic */ void setError$default(EmbedView embedView, String str, int i5, String str2, Integer num, int i6, Object obj) {
        if ((i6 & 4) != 0) {
            str2 = null;
        }
        if ((i6 & 8) != 0) {
            num = null;
        }
        embedView.setError(str, i5, str2, num);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* renamed from: setFields-KZKlO-o, reason: not valid java name */
    public final void m748setFieldsKZKlOo(List<EmbedField> fields, String messageId, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldShowRoleDot, boolean shouldShowRoleOnName, boolean shouldForceRevealSpoilers, Function2<? super MessageId, ? super LinkContentNode, Unit> onLinkClicked, Function1<? super LinkContentNode, Unit> onLinkLongClicked, Function1<? super CharSequence, Unit> onTapCopyText, Function0<Unit> onTapSpoiler, Function1<? super EmojiContentNode, Unit> onTapEmoji, Function3 onTapChannel, Function6 onTapMention, Function1<? super CommandMentionContentNode, Unit> onTapCommand, Function1<? super String, Unit> onTapTimestamp) {
        LinearLayout linearLayout;
        String str;
        String str2;
        EmbedFieldView embedFieldView;
        DraweeSpanStringBuilder draweeSpanStringBuilder;
        String str3;
        String str4 = messageId;
        a aVar = new a(onLinkClicked, str4, 1);
        LinearLayout linearLayout2 = this.binding.fieldsContainer;
        Intrinsics.checkNotNull(linearLayout2);
        int i5 = 0;
        linearLayout2.setVisibility(!fields.isEmpty() ? 0 : 8);
        ViewGroupUtilsKt.setUpLayoutForList(linearLayout2, fields.size(), new s0(8, linearLayout2));
        for (Object obj : fields) {
            int i6 = i5 + 1;
            DraweeSpanStringBuilder draweeSpanStringBuilder2 = null;
            if (i5 < 0) {
                c0.k();
                throw null;
            }
            EmbedField embedField = (EmbedField) obj;
            View childAt = linearLayout2.getChildAt(i5);
            Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type com.discord.chat.presentation.message.view.EmbedFieldView");
            EmbedFieldView embedFieldView2 = (EmbedFieldView) childAt;
            String rawName = embedField.getRawName();
            if (rawName == null) {
                rawName = "";
            }
            StructurableText name = embedField.getName();
            if (name != null) {
                LinearLayout linearLayout3 = linearLayout2;
                Context context = embedFieldView2.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                TextPaint paint = embedFieldView2.getBinding().name.getPaint();
                Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
                str = "getPaint(...)";
                str2 = "getContext(...)";
                linearLayout = linearLayout3;
                draweeSpanStringBuilder = TextUtilsKt.toSpannable(name, context, str4, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : shouldForceRevealSpoilers, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : aVar, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : onLinkLongClicked, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : onTapChannel, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : onTapMention, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : onTapCommand, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : onTapTimestamp, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : onTapEmoji, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : onTapSpoiler, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : 0.0f, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
                embedFieldView = embedFieldView2;
                rawName = rawName;
            } else {
                linearLayout = linearLayout2;
                str = "getPaint(...)";
                str2 = "getContext(...)";
                embedFieldView = embedFieldView2;
                draweeSpanStringBuilder = null;
            }
            embedFieldView.setName(rawName, draweeSpanStringBuilder, onTapCopyText);
            String rawValue = embedField.getRawValue();
            String str5 = rawValue != null ? rawValue : "";
            StructurableText value = embedField.getValue();
            if (value != null) {
                EmbedFieldView embedFieldView3 = embedFieldView;
                Context context2 = embedFieldView3.getContext();
                Intrinsics.checkNotNullExpressionValue(context2, str2);
                TextPaint paint2 = embedFieldView3.getBinding().value.getPaint();
                Intrinsics.checkNotNullExpressionValue(paint2, str);
                Paint.FontMetrics fontMetrics = embedFieldView3.getBinding().value.getPaint().getFontMetrics();
                Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
                draweeSpanStringBuilder2 = TextUtilsKt.toSpannable(value, context2, messageId, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint2, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : shouldForceRevealSpoilers, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : aVar, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : onLinkLongClicked, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : onTapChannel, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : onTapMention, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : onTapCommand, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : onTapTimestamp, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : onTapEmoji, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : onTapSpoiler, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : TextUtilsKt.getBaselineHeightPx(fontMetrics), (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
                embedFieldView = embedFieldView3;
                str3 = str5;
            } else {
                str3 = str5;
            }
            embedFieldView.setValue(str3, draweeSpanStringBuilder2, onTapCopyText);
            str4 = messageId;
            i5 = i6;
            linearLayout2 = linearLayout;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setFields_KZKlO_o$lambda$29(Function2 function2, String str, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        function2.invoke(MessageId.m1189boximpl(str), node);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final View setFields_KZKlO_o$lambda$33$lambda$30(LinearLayout linearLayout) {
        Context context = linearLayout.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        return new EmbedFieldView(context, null, 0, 6, null);
    }

    private final void setFooter(String imageUrl, String text, Function1<? super CharSequence, Unit> onTapCopyText, boolean shouldAutoPlayGifs) {
        LinearLayout footerContainer = this.binding.footerContainer;
        Intrinsics.checkNotNullExpressionValue(footerContainer, "footerContainer");
        footerContainer.setVisibility(((imageUrl == null || StringsKt.K(imageUrl)) && (text == null || StringsKt.K(text))) ? 8 : 0);
        SimpleDraweeView footerAvatar = this.binding.footerAvatar;
        Intrinsics.checkNotNullExpressionValue(footerAvatar, "footerAvatar");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(footerAvatar, imageUrl, Boolean.valueOf(shouldAutoPlayGifs), null, null, null, null, 60, null);
        TextView textView = this.binding.footerText;
        Intrinsics.checkNotNull(textView);
        ViewUtilsKt.setOptionalText(textView, text);
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(textView, false, text != null ? new i(2, text, onTapCopyText) : null, 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setFooter$lambda$38$lambda$37$lambda$36(Function1 function1, String str, View view) {
        function1.invoke(str);
        return true;
    }

    private final void setMediaEmbed(EmbedViewResizingMediaView mediaView, Embed embed, MediaSource mediaSource, int maxHeightPx, int maxWidthPx) {
        if (maxHeightPx > 0 && maxWidthPx > 0) {
            Pair<Integer, Integer> targetDimensions = EmbedUtilsKt.getTargetDimensions(embed);
            Integer num = (Integer) targetDimensions.f13474d;
            Integer num2 = (Integer) targetDimensions.f13475e;
            mediaView.setTarget(num != null ? num.intValue() : 0, num2 != null ? num2.intValue() : 0, maxHeightPx, maxWidthPx);
        }
        mediaView.setVisibility(0);
        com.facebook.drawee.drawable.o oVar = com.facebook.drawee.drawable.o.f4470c;
        EmbedThumbnail thumbnail = embed.getThumbnail();
        MediaView.setMediaData$default(mediaView, mediaSource, false, false, false, null, false, null, null, 0, false, thumbnail != null ? Intrinsics.areEqual(thumbnail.getShowPlayButton(), Boolean.TRUE) : false, false, 0, new s0(9, this), null, null, null, null, null, oVar, 515070, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setMediaEmbed$lambda$35(EmbedView embedView) {
        embedView.binding.spoiler.makeObscureHideButtonHidden();
        return Unit.a;
    }

    private final void setProvider(CharSequence provider, Integer providerColor, Function1<? super CharSequence, Unit> onTapCopyText) {
        SimpleDraweeSpanTextView simpleDraweeSpanTextView = this.binding.provider;
        Intrinsics.checkNotNull(simpleDraweeSpanTextView);
        ViewUtilsKt.setOptionalText(simpleDraweeSpanTextView, provider);
        simpleDraweeSpanTextView.setTextColor(providerColor != null ? providerColor.intValue() : ThemeManagerKt.getTheme().getTextDefault());
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(simpleDraweeSpanTextView, false, provider != null ? new com.discord.chat.presentation.message.t(2, onTapCopyText, provider) : null, 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setProvider$lambda$17$lambda$16$lambda$15(Function1 function1, CharSequence charSequence, View view) {
        function1.invoke(charSequence);
        return true;
    }

    /* renamed from: setThumbnail-xk5Fe9g, reason: not valid java name */
    private final void m750setThumbnailxk5Fe9g(EmbedThumbnail thumbnail, boolean shouldAutoPlayGifs, String messageId, String embedUrl, String embedTitle, Function3 onTitleLinkClicked) {
        SimpleDraweeView simpleDraweeView = this.binding.thumbnail;
        MediaContainingViewResizer mediaContainingViewResizer = MediaContainingViewResizer.INSTANCE;
        Intrinsics.checkNotNull(simpleDraweeView);
        int width = thumbnail != null ? thumbnail.getWidth() : 0;
        int height = thumbnail != null ? thumbnail.getHeight() : 0;
        int i5 = this.maxThumbnailSize;
        MediaContainingViewResizer.resizeLayoutParams$default(mediaContainingViewResizer, simpleDraweeView, width, height, i5, i5, null, 16, null);
        String proxyURL = thumbnail != null ? thumbnail.getProxyURL() : null;
        Boolean valueOf = Boolean.valueOf(shouldAutoPlayGifs);
        Boolean valueOf2 = Boolean.valueOf(thumbnail != null ? thumbnail.getSrcIsAnimated() : false);
        SimpleDraweeView thumbnail2 = this.binding.thumbnail;
        Intrinsics.checkNotNullExpressionValue(thumbnail2, "thumbnail");
        SetOptionalImageUrlKt.setOptionalImageUrl$default(simpleDraweeView, proxyURL, valueOf, valueOf2, GetMediaImagePlaceholderStatesListenerKt.getMediaImagePlaceholderStatesListener(thumbnail2, thumbnail != null ? thumbnail.getPlaceholder() : null, thumbnail != null ? thumbnail.getPlaceholderVersion() : null), null, null, 48, null);
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(simpleDraweeView, false, thumbnail != null ? new com.discord.chat.presentation.message.b(onTitleLinkClicked, messageId, embedUrl, thumbnail, embedTitle, 1) : null, 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setThumbnail_xk5Fe9g$lambda$25$lambda$24$lambda$23(Function3 function3, String str, String str2, EmbedThumbnail embedThumbnail, String str3, View view) {
        MessageId m1189boximpl = MessageId.m1189boximpl(str);
        if (str2 == null) {
            str2 = embedThumbnail.getUrl();
        }
        function3.invoke(m1189boximpl, str2, str3);
    }

    private final void setTitle(String rawTitle, DraweeSpanStringBuilder title, Integer titleColor, View.OnClickListener onClickListener, Function1<? super String, Unit> onLongClickListener) {
        SimpleDraweeSpanTextView simpleDraweeSpanTextView = this.binding.title;
        Intrinsics.checkNotNull(simpleDraweeSpanTextView);
        SimpleDraweeSpanTextViewUtilsKt.setOptionalText(simpleDraweeSpanTextView, title);
        simpleDraweeSpanTextView.setTextColor(titleColor != null ? titleColor.intValue() : ThemeManagerKt.getTheme().getTextDefault());
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(simpleDraweeSpanTextView, false, onClickListener, 1, null);
        NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(simpleDraweeSpanTextView, false, title != null ? new i(3, rawTitle, onLongClickListener) : null, 1, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setTitle$lambda$20$lambda$19$lambda$18(Function1 function1, String str, View view) {
        function1.invoke(str);
        return true;
    }

    /* renamed from: setEmbed-Km7rQmo, reason: not valid java name */
    public final void m751setEmbedKm7rQmo(@NotNull MessageMargins margins, @NotNull Embed embed, long channelId, @NotNull String messageId, int constrainedWidth, int maxHeightPx, int radiusPx, boolean shouldAutoPlayGifs, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldShowRoleDot, boolean shouldShowRoleOnName, boolean shouldForceRevealSpoilers, @NotNull Function3 onTitleLinkClicked, @NotNull Function3 onAuthorLinkClicked, @NotNull final Function2<? super Double, ? super Integer, Unit> onMediaClicked, View.OnLongClickListener onMediaLongClicked, @NotNull Function2<? super MessageId, ? super LinkContentNode, Unit> onLinkClicked, @NotNull Function1<? super LinkContentNode, Unit> onLongTapLinkNode, @NotNull Function1<? super CharSequence, Unit> onTapCopyText, @NotNull Function0<Unit> onTapSpoiler, @NotNull Function1<? super EmojiContentNode, Unit> onTapEmoji, @NotNull Function3 onTapChannel, @NotNull Function6 onTapMention, @NotNull Function1<? super CommandMentionContentNode, Unit> onTapCommand, @NotNull Function1<? super GameMentionContentNode, Unit> onTapGameMention, @NotNull Function1<? super String, Unit> onTapTimestamp, SpoilerConfig spoilerConfig, double portal, final boolean isObscure, boolean obscureHideControls, boolean obscureIsOpaque, boolean isForwardedContent) {
        String str;
        String str2;
        String str3;
        DraweeSpanStringBuilder draweeSpanStringBuilder;
        g gVar;
        DraweeSpanStringBuilder draweeSpanStringBuilder2;
        DraweeSpanStringBuilder draweeSpanStringBuilder3;
        boolean z5;
        boolean z6;
        Function3 function3;
        DraweeSpanStringBuilder draweeSpanStringBuilder4;
        Embed embed2;
        DraweeSpanStringBuilder draweeSpanStringBuilder5;
        Throwable th2;
        boolean z7;
        boolean z8;
        final EmbedView embedView = this;
        Intrinsics.checkNotNullParameter(margins, "margins");
        Intrinsics.checkNotNullParameter(embed, "embed");
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(onTitleLinkClicked, "onTitleLinkClicked");
        Intrinsics.checkNotNullParameter(onAuthorLinkClicked, "onAuthorLinkClicked");
        Intrinsics.checkNotNullParameter(onMediaClicked, "onMediaClicked");
        Intrinsics.checkNotNullParameter(onLinkClicked, "onLinkClicked");
        Intrinsics.checkNotNullParameter(onLongTapLinkNode, "onLongTapLinkNode");
        Intrinsics.checkNotNullParameter(onTapCopyText, "onTapCopyText");
        Intrinsics.checkNotNullParameter(onTapSpoiler, "onTapSpoiler");
        Intrinsics.checkNotNullParameter(onTapEmoji, "onTapEmoji");
        Intrinsics.checkNotNullParameter(onTapChannel, "onTapChannel");
        Intrinsics.checkNotNullParameter(onTapMention, "onTapMention");
        Intrinsics.checkNotNullParameter(onTapCommand, "onTapCommand");
        Intrinsics.checkNotNullParameter(onTapGameMention, "onTapGameMention");
        Intrinsics.checkNotNullParameter(onTapTimestamp, "onTapTimestamp");
        if (!Intrinsics.areEqual(embed, embedView.embed)) {
            embedView.reset();
            embedView.embed = embed;
        }
        View root = embedView.binding.getRoot();
        Intrinsics.checkNotNullExpressionValue(root, "getRoot(...)");
        ViewClippingUtilsKt.clipToRoundedRectangle(root, radiusPx);
        ConstraintLayout inlineMediaContainer = embedView.binding.inlineMediaContainer;
        Intrinsics.checkNotNullExpressionValue(inlineMediaContainer, "inlineMediaContainer");
        ViewClippingUtilsKt.clipToRoundedRectangle(inlineMediaContainer, radiusPx);
        EmbedViewResizingMediaView mediaView = embedView.binding.mediaView;
        Intrinsics.checkNotNullExpressionValue(mediaView, "mediaView");
        ViewClippingUtilsKt.clipToRoundedRectangle(mediaView, radiusPx);
        SimpleDraweeView thumbnail = embedView.binding.thumbnail;
        Intrinsics.checkNotNullExpressionValue(thumbnail, "thumbnail");
        ViewClippingUtilsKt.clipToRoundedRectangle(thumbnail, radiusPx);
        if (EmbedUtilsKt.isInlineMedia(embed)) {
            final MediaSource m433toMediaSourceUBIQNlQ = EmbedUtilsKt.m433toMediaSourceUBIQNlQ(embed, channelId, messageId, shouldAutoPlayGifs, Double.valueOf(portal));
            if (m433toMediaSourceUBIQNlQ != null) {
                Space spacer = embedView.binding.spacer;
                Intrinsics.checkNotNullExpressionValue(spacer, "spacer");
                spacer.setVisibility(8);
                if (m433toMediaSourceUBIQNlQ.getPreviewUrl() != null) {
                    EmbedViewResizingMediaView mediaView2 = embedView.binding.mediaView;
                    Intrinsics.checkNotNullExpressionValue(mediaView2, "mediaView");
                    embedView.setMediaEmbed(mediaView2, embed, m433toMediaSourceUBIQNlQ, maxHeightPx, MessageMargins.INSTANCE.getWidth(margins, constrainedWidth, isForwardedContent));
                    final int i5 = 1;
                    embedView.binding.mediaView.setOnMediaClickListeners(new View.OnClickListener() { // from class: com.discord.chat.presentation.message.view.j
                        @Override // android.view.View.OnClickListener
                        public final void onClick(View view) {
                            switch (i5) {
                                case 0:
                                    EmbedView.setEmbed_Km7rQmo$lambda$14$lambda$13(onMediaClicked, m433toMediaSourceUBIQNlQ, isObscure, embedView, view);
                                    break;
                                default:
                                    EmbedView.setEmbed_Km7rQmo$lambda$3$lambda$2(onMediaClicked, m433toMediaSourceUBIQNlQ, isObscure, embedView, view);
                                    break;
                            }
                        }
                    }, onMediaLongClicked);
                    z8 = false;
                    setBackgroundColorEnabled$default(embedView, false, null, 2, null);
                } else {
                    z8 = false;
                }
                z5 = z8;
                z7 = true;
            } else {
                z7 = true;
                z5 = false;
            }
        } else {
            StructurableText title = embed.getTitle();
            if (title != null) {
                Context context = embedView.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                TextPaint paint = embedView.binding.title.getPaint();
                Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
                str = "getPaint(...)";
                str2 = "inlineMediaContainer";
                str3 = messageId;
                draweeSpanStringBuilder = TextUtilsKt.toSpannable(title, context, str3, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : shouldForceRevealSpoilers, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : onTapChannel, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : onTapMention, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : onTapCommand, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : onTapGameMention, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : onTapTimestamp, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : onTapEmoji, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : onTapSpoiler, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : 0.0f, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
            } else {
                str = "getPaint(...)";
                str2 = "inlineMediaContainer";
                str3 = messageId;
                draweeSpanStringBuilder = null;
            }
            String rawTitle = embed.getRawTitle();
            if (rawTitle == null) {
                rawTitle = "";
            }
            Integer valueOf = embed.getUrl() != null ? Integer.valueOf(ThemeManagerKt.getTheme().getTextLink()) : embed.getHeaderTextColor();
            String url = embed.getUrl();
            if (url != null) {
                draweeSpanStringBuilder2 = draweeSpanStringBuilder;
                gVar = new g(onTitleLinkClicked, str3, url, draweeSpanStringBuilder);
                draweeSpanStringBuilder3 = null;
            } else {
                gVar = null;
                draweeSpanStringBuilder2 = draweeSpanStringBuilder;
                draweeSpanStringBuilder3 = null;
            }
            z5 = false;
            Integer num = valueOf;
            String str4 = str;
            embedView.setTitle(rawTitle, draweeSpanStringBuilder2, num, gVar, onTapCopyText);
            String rawDescription = embed.getRawDescription();
            if (rawDescription == null) {
                rawDescription = "";
            }
            DraweeSpanStringBuilder draweeSpanStringBuilder6 = draweeSpanStringBuilder3;
            StructurableText description = embed.getDescription();
            if (description != null) {
                Context context2 = embedView.getContext();
                Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
                TextPaint paint2 = embedView.binding.description.getPaint();
                Intrinsics.checkNotNullExpressionValue(paint2, str4);
                Paint.FontMetrics fontMetrics = embedView.binding.description.getPaint().getFontMetrics();
                Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
                float baselineHeightPx = TextUtilsKt.getBaselineHeightPx(fontMetrics);
                draweeSpanStringBuilder4 = draweeSpanStringBuilder6;
                embed2 = embed;
                z6 = shouldAutoPlayGifs;
                function3 = onAuthorLinkClicked;
                draweeSpanStringBuilder5 = TextUtilsKt.toSpannable(description, context2, str3, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, paint2, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : shouldForceRevealSpoilers, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : new a(onLinkClicked, str3, 2), (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : onLongTapLinkNode, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : onTapChannel, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : onTapMention, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : onTapCommand, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : onTapGameMention, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : onTapTimestamp, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : onTapEmoji, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : onTapSpoiler, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
            } else {
                z6 = shouldAutoPlayGifs;
                function3 = onAuthorLinkClicked;
                draweeSpanStringBuilder4 = draweeSpanStringBuilder6;
                embed2 = embed;
                draweeSpanStringBuilder5 = draweeSpanStringBuilder4;
            }
            embedView.setDescription(rawDescription, draweeSpanStringBuilder5, embed2.getBodyTextColor(), onTapCopyText);
            EmbedProvider provider = embed2.getProvider();
            embedView.setProvider(provider != null ? provider.getName() : draweeSpanStringBuilder4, embed2.getProviderColor(), onTapCopyText);
            embedView.setBackgroundColorEnabled(!Intrinsics.areEqual(embed2.getDisableBackgroundColor(), Boolean.TRUE), embed2.getBackgroundColor());
            embedView.setBorder(embed2.getBorderLeftColor());
            EmbedAuthor author = embed2.getAuthor();
            String imageUrl = author != null ? author.getImageUrl() : draweeSpanStringBuilder4;
            EmbedAuthor author2 = embed2.getAuthor();
            embedView.setAuthor(imageUrl, author2 != null ? author2.getName() : draweeSpanStringBuilder4, z6);
            EmbedAuthor author3 = embed2.getAuthor();
            embedView.setAuthorOnClickListener((author3 == null || author3.getUrl() == null) ? draweeSpanStringBuilder4 : new com.discord.chat.presentation.message.d(function3, str3, embed2, 3), onTapCopyText);
            List<EmbedField> fields = embed2.getFields();
            if (fields == null) {
                fields = m0.f13512d;
            }
            embedView.m748setFieldsKZKlOo(fields, str3, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, shouldForceRevealSpoilers, onLinkClicked, onLongTapLinkNode, onTapCopyText, onTapSpoiler, onTapEmoji, onTapChannel, onTapMention, onTapCommand, onTapTimestamp);
            EmbedFooter footer = embed.getFooter();
            String imageUrl2 = footer != null ? footer.getImageUrl() : null;
            EmbedFooter footer2 = embed.getFooter();
            embedView.setFooter(imageUrl2, footer2 != null ? footer2.getContent() : null, onTapCopyText, shouldAutoPlayGifs);
            if (embed.getFailureState() == EmbedFailureState.AUTO_MODERATION_BLOCKED_MESSAGE) {
                embedView.setError(embed.getMessageSendError(), ThemeManagerKt.getTheme().getTextMuted(), embed.getIconURL(), Integer.valueOf(ColorUtilsKt.getColorCompat(embedView, R.color.red_345)));
                th2 = null;
            } else {
                th2 = null;
                embedView.setError(embed.getMessageSendError(), embed.getBodyTextColor(), embed.getIconURL(), null);
            }
            List<MediaSource> m432toImageMediaSourcesSHRpUJI = EmbedUtilsKt.m432toImageMediaSourcesSHRpUJI(embed, channelId, messageId);
            if (m432toImageMediaSourcesSHRpUJI != null) {
                int i6 = (int) (maxHeightPx * 0.75d);
                int widthForEmbedContent = MessageMargins.INSTANCE.getWidthForEmbedContent(margins, constrainedWidth, isForwardedContent);
                MediaContainingViewResizer mediaContainingViewResizer = MediaContainingViewResizer.INSTANCE;
                ConstraintLayout constraintLayout = embedView.binding.inlineMediaContainer;
                Intrinsics.checkNotNullExpressionValue(constraintLayout, str2);
                MediaContainingViewResizer.resizeLayoutParams$default(mediaContainingViewResizer, constraintLayout, widthForEmbedContent, i6, widthForEmbedContent, i6, null, 16, null);
                EmbedViewBinding embedViewBinding = embedView.binding;
                EmbedViewResizingMediaView[] other = {embedViewBinding.inlineMediaView, embedViewBinding.inlineMediaView2, embedViewBinding.inlineMediaView3, embedViewBinding.inlineMediaView4};
                Intrinsics.checkNotNullParameter(m432toImageMediaSourcesSHRpUJI, "<this>");
                Intrinsics.checkNotNullParameter(other, "other");
                ArrayList arrayList = new ArrayList(Math.min(d0.l(m432toImageMediaSourcesSHRpUJI, 10), 4));
                int i10 = 0;
                for (Object obj : m432toImageMediaSourcesSHRpUJI) {
                    if (i10 >= 4) {
                        break;
                    }
                    arrayList.add(new Pair(obj, other[i10]));
                    i10++;
                }
                Iterator it = arrayList.iterator();
                int i11 = 0;
                while (it.hasNext()) {
                    Object next = it.next();
                    int i12 = i11 + 1;
                    if (i11 < 0) {
                        c0.k();
                        throw th2;
                    }
                    Pair pair = (Pair) next;
                    MediaSource mediaSource = (MediaSource) pair.f13474d;
                    Object obj2 = pair.f13475e;
                    Intrinsics.checkNotNullExpressionValue(obj2, "component2(...)");
                    EmbedViewResizingMediaView embedViewResizingMediaView = (EmbedViewResizingMediaView) obj2;
                    embedView.setMediaEmbed(embedViewResizingMediaView, embed, mediaSource, 0, 0);
                    embedViewResizingMediaView.setOnMediaClickListeners(new com.discord.chat.presentation.message.viewholder.f(onMediaClicked, mediaSource, i11, 4), onMediaLongClicked);
                    i11 = i12;
                }
                z7 = true;
            } else {
                final MediaSource m433toMediaSourceUBIQNlQ2 = EmbedUtilsKt.m433toMediaSourceUBIQNlQ(embed, channelId, messageId, shouldAutoPlayGifs, Double.valueOf(portal));
                if (m433toMediaSourceUBIQNlQ2 != null) {
                    EmbedViewResizingMediaView inlineMediaView = embedView.binding.inlineMediaView;
                    Intrinsics.checkNotNullExpressionValue(inlineMediaView, "inlineMediaView");
                    embedView.setMediaEmbed(inlineMediaView, embed, m433toMediaSourceUBIQNlQ2, maxHeightPx, MessageMargins.INSTANCE.getWidthForEmbedContent(margins, constrainedWidth, isForwardedContent));
                    final int i13 = 0;
                    embedView.binding.inlineMediaView.setOnMediaClickListeners(new View.OnClickListener() { // from class: com.discord.chat.presentation.message.view.j
                        @Override // android.view.View.OnClickListener
                        public final void onClick(View view) {
                            switch (i13) {
                                case 0:
                                    EmbedView.setEmbed_Km7rQmo$lambda$14$lambda$13(onMediaClicked, m433toMediaSourceUBIQNlQ2, isObscure, embedView, view);
                                    break;
                                default:
                                    EmbedView.setEmbed_Km7rQmo$lambda$3$lambda$2(onMediaClicked, m433toMediaSourceUBIQNlQ2, isObscure, embedView, view);
                                    break;
                            }
                        }
                    }, onMediaLongClicked);
                }
                z7 = true;
                if (WhenMappings.$EnumSwitchMapping$0[embed.getType().ordinal()] != 1 ? m433toMediaSourceUBIQNlQ2 != null : embed.getVideo() != null) {
                    embedView = this;
                } else {
                    m750setThumbnailxk5Fe9g(embed.getThumbnail(), shouldAutoPlayGifs, messageId, embed.getUrl(), embed.getRawTitle(), onTitleLinkClicked);
                    embedView = this;
                }
            }
        }
        String obscureAwaitingScan = embed.getObscureAwaitingScan();
        embedView.configureSpoiler(spoilerConfig, !((obscureAwaitingScan == null || StringsKt.K(obscureAwaitingScan)) ? z7 : z5), obscureHideControls, obscureIsOpaque);
    }

    public /* synthetic */ EmbedView(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public EmbedView(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        EmbedViewBinding inflate = EmbedViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        this.maxThumbnailSize = context.getResources().getDimensionPixelSize(com.discord.chat.R.dimen.message_embed_max_thumbnail_size);
        inflate.getRoot().setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundSurfaceHigh());
        SimpleDraweeSpanTextView simpleDraweeSpanTextView = inflate.provider;
        Intrinsics.checkNotNull(simpleDraweeSpanTextView);
        SetTextSizeSpKt.setTextSizeSp(simpleDraweeSpanTextView, 10.0f);
        DiscordFont discordFont = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(simpleDraweeSpanTextView, discordFont);
        SimpleDraweeView authorAvatar = inflate.authorAvatar;
        Intrinsics.checkNotNullExpressionValue(authorAvatar, "authorAvatar");
        ViewClippingUtilsKt.clipToCircle(authorAvatar);
        TextView authorName = inflate.authorName;
        Intrinsics.checkNotNullExpressionValue(authorName, "authorName");
        DiscordFont discordFont2 = DiscordFont.PrimarySemibold;
        DiscordFontUtilsKt.setDiscordFont(authorName, discordFont2);
        inflate.authorName.setTextColor(ThemeManagerKt.getTheme().getMobileTextHeadingPrimary());
        TextView authorName2 = inflate.authorName;
        Intrinsics.checkNotNullExpressionValue(authorName2, "authorName");
        SetTextSizeSpKt.setTextSizeSp(authorName2, 12.0f);
        SimpleDraweeSpanTextView title = inflate.title;
        Intrinsics.checkNotNullExpressionValue(title, "title");
        DiscordFontUtilsKt.setDiscordFont(title, discordFont2);
        SimpleDraweeSpanTextView title2 = inflate.title;
        Intrinsics.checkNotNullExpressionValue(title2, "title");
        SetTextSizeSpKt.setTextSizeSp(title2, 16.0f);
        SimpleDraweeSpanTextView description = inflate.description;
        Intrinsics.checkNotNullExpressionValue(description, "description");
        DiscordFontUtilsKt.setDiscordFont(description, discordFont);
        SimpleDraweeView footerAvatar = inflate.footerAvatar;
        Intrinsics.checkNotNullExpressionValue(footerAvatar, "footerAvatar");
        ViewClippingUtilsKt.clipToCircle(footerAvatar);
        TextView footerText = inflate.footerText;
        Intrinsics.checkNotNullExpressionValue(footerText, "footerText");
        DiscordFontUtilsKt.setDiscordFont(footerText, discordFont2);
        inflate.footerText.setTextColor(ThemeManagerKt.getTheme().getTextDefault());
        TextView footerText2 = inflate.footerText;
        Intrinsics.checkNotNullExpressionValue(footerText2, "footerText");
        SetTextSizeSpKt.setTextSizeSp(footerText2, 12.0f);
        TextView error = inflate.error;
        Intrinsics.checkNotNullExpressionValue(error, "error");
        DiscordFontUtilsKt.setDiscordFont(error, discordFont);
        TextView error2 = inflate.error;
        Intrinsics.checkNotNullExpressionValue(error2, "error");
        SetTextSizeSpKt.setTextSizeSp(error2, 12.0f);
        SimpleDraweeView errorIcon = inflate.errorIcon;
        Intrinsics.checkNotNullExpressionValue(errorIcon, "errorIcon");
        ReactAssetUtilsKt.setReactAsset(errorIcon, ReactAsset.CircleErrorIcon);
        inflate.imageBlurBg.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundBaseLower());
    }
}
