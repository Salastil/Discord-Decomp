package com.discord.chat.presentation.textutils;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.net.Uri;
import android.text.SpannableStringBuilder;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.LeadingMarginSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.UnderlineSpan;
import android.util.SizeF;
import android.view.View;
import bs.e1;
import com.discord.chat.bridge.contentnode.AttachmentLinkContentNode;
import com.discord.chat.bridge.contentnode.BlockQuoteContentNode;
import com.discord.chat.bridge.contentnode.BulletListContentNode;
import com.discord.chat.bridge.contentnode.ChannelMentionContentNode;
import com.discord.chat.bridge.contentnode.ChannelNameContentNode;
import com.discord.chat.bridge.contentnode.CodeBlockContentNode;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.ContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.EmphasisContentNode;
import com.discord.chat.bridge.contentnode.ErrorContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.GuildNameContentNode;
import com.discord.chat.bridge.contentnode.HeadingContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LHeadingContentNode;
import com.discord.chat.bridge.contentnode.LineBreakContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.MentionContentNode;
import com.discord.chat.bridge.contentnode.NewLineContentNode;
import com.discord.chat.bridge.contentnode.ParagraphContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNodeKt;
import com.discord.chat.bridge.contentnode.SpoilerContentNode;
import com.discord.chat.bridge.contentnode.StaticChannelMentionContentNode;
import com.discord.chat.bridge.contentnode.StaticChannelMentionType;
import com.discord.chat.bridge.contentnode.StrikethroughContentNode;
import com.discord.chat.bridge.contentnode.StrongContentNode;
import com.discord.chat.bridge.contentnode.SubtextContentNode;
import com.discord.chat.bridge.contentnode.TextContentNode;
import com.discord.chat.bridge.contentnode.TimestampContentNode;
import com.discord.chat.bridge.contentnode.UnderlineContentNode;
import com.discord.chat.bridge.contentnode.UserOrRoleMentionContentNode;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColorsKt;
import com.discord.chat.bridge.spoiler.SpoilerIdentifier;
import com.discord.chat.bridge.spoiler.SpoilerManager;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.PrimitiveStructurableText;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.presentation.message.EnhancedRoleColorsSpan;
import com.discord.chat.presentation.message.RoleDotSpan;
import com.discord.chat.presentation.message.i;
import com.discord.chat.presentation.message.j;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.crash_reporting.CrashReporting;
import com.discord.emoji.RenderableEmoji;
import com.discord.emoji.RenderableEmojiKt;
import com.discord.fonts.DiscordFont;
import com.discord.image.fresco.DiskCachePolicyKt;
import com.discord.misc.utilities.kotlin.ForceExhaustiveKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.primitives.GuildId;
import com.discord.primitives.RoleId;
import com.discord.primitives.UserId;
import com.discord.react.FontManager;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetExtensionsKt;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedClickableSpan;
import com.discord.span.utilities.GGSansBoldSpan;
import com.discord.span.utilities.GGSansItalicSpan;
import com.discord.span.utilities.SpannableExtensionsKt;
import com.discord.span.utilities.SpannableStringBuilderExtensionsKt;
import com.discord.span.utilities.common.BackgroundStyle;
import com.discord.span.utilities.common.BorderStyle;
import com.discord.span.utilities.common.ShadowStyle;
import com.discord.span.utilities.spannable.BackgroundSpan;
import com.discord.span.utilities.spannable.BulletSpan;
import com.discord.span.utilities.spannable.ClickableSpan;
import com.discord.span.utilities.spannable.HorizontalSpacerSpan;
import com.discord.span.utilities.spannable.OrderedListBulletSpan;
import com.discord.span.utilities.spannable.QuoteSpan;
import com.discord.span.utilities.spannable.SpoilerSpan;
import com.discord.span.utilities.spannable.VerticalPaddingSpan;
import com.discord.span.utilities.spannable.VerticalSpacerSpan;
import com.discord.theme.DiscordThemeObject;
import com.discord.theme.R;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.backends.pipeline.PipelineDraweeControllerBuilder;
import com.facebook.drawee.drawable.o;
import com.facebook.drawee.generic.GenericDraweeHierarchyBuilder;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import fo.n;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.x;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import o8.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000Þ\u0001\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0014\n\u0002\u0010\u0006\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\r\n\u0002\b\u000b\n\u0002\u0010\f\n\u0002\b\u000b\u001a\u0015\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0001\u001a\u00020\u0000¢\u0006\u0004\b\u0003\u0010\u0004\u001a\u001d\u0010\t\u001a\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0007¢\u0006\u0004\b\t\u0010\n\u001a·\u0004\u0010;\u001a\u00020:*\u00020\u000b2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0014\u001a\u00020\u00102\u0006\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0015\u001a\u00020\u00102\u0014\b\u0002\u0010\u0019\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010\u001a\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00180\u00162$\b\u0002\u0010\u001c\u001a\u001e\u0012\u0004\u0012\u00020\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u00180\u001b2,\b\u0002\u0010\u001e\u001a&\u0012\u0004\u0012\u00020\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u00180\u001d2\u0014\b\u0002\u0010\u001f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00180\u00162\u001a\b\u0002\u0010!\u001a\u0014\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00180 2<\b\u0002\u0010#\u001a6\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u00180\"2\u0014\b\u0002\u0010%\u001a\u000e\u0012\u0004\u0012\u00020$\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010&\u001a\u000e\u0012\u0004\u0012\u00020$\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010(\u001a\u000e\u0012\u0004\u0012\u00020'\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010)\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010+\u001a\u000e\u0012\u0004\u0012\u00020*\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010-\u001a\u000e\u0012\u0004\u0012\u00020,\u0012\u0004\u0012\u00020\u00180\u00162\u0014\b\u0002\u0010/\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020.0\u00162\u000e\b\u0002\u00101\u001a\b\u0012\u0004\u0012\u00020\u0018002\u0014\b\u0002\u00103\u001a\u000e\u0012\u0004\u0012\u000202\u0012\u0004\u0012\u00020\u00180\u00162\b\b\u0002\u00104\u001a\u00020\u00102\b\b\u0002\u00106\u001a\u0002052\b\b\u0002\u00107\u001a\u00020\u00022\n\b\u0002\u00108\u001a\u0004\u0018\u00010\u00022\b\b\u0002\u00109\u001a\u00020\u0010¢\u0006\u0004\b;\u0010<\u001a)\u0010B\u001a\u00020\u0018*\b\u0012\u0004\u0012\u00020>0=2\u0006\u0010@\u001a\u00020?2\u0006\u0010A\u001a\u00020:H\u0002¢\u0006\u0004\bB\u0010C\u001a5\u0010;\u001a\u00020:*\b\u0012\u0004\u0012\u00020>0=2\u0006\u0010@\u001a\u00020?2\b\b\u0002\u0010D\u001a\u00020:2\b\b\u0002\u0010E\u001a\u00020\u0010H\u0002¢\u0006\u0004\b;\u0010F\u001a]\u0010M\u001a\u00020\u0018*\u00020:2\u0006\u0010\r\u001a\u00020\f2\u0006\u0010@\u001a\u00020?2\u0006\u0010G\u001a\u00020\u000e2\b\b\u0001\u0010H\u001a\u00020\u00072\b\b\u0001\u0010I\u001a\u00020\u00072\n\b\u0002\u0010J\u001a\u0004\u0018\u00010\u00072\b\b\u0002\u0010K\u001a\u00020\u00022\b\b\u0002\u0010L\u001a\u00020\u0002¢\u0006\u0004\bM\u0010N\u001a1\u0010Q\u001a\u00020\u0018*\u00020:2\f\u0010O\u001a\b\u0012\u0004\u0012\u00020>0=2\u0006\u0010@\u001a\u00020?2\u0006\u0010P\u001a\u00020\u0010H\u0002¢\u0006\u0004\bQ\u0010R\u001a\u0019\u0010U\u001a\u00020T2\b\u0010S\u001a\u0004\u0018\u00010\u000eH\u0002¢\u0006\u0004\bU\u0010V\u001a\u001f\u0010X\u001a\u00020\u00072\b\u0010S\u001a\u0004\u0018\u00010\u000e2\u0006\u0010W\u001a\u00020\u0002¢\u0006\u0004\bX\u0010Y\u001a\u0019\u0010[\u001a\u00020\u00022\b\b\u0001\u0010Z\u001a\u00020\u0007H\u0002¢\u0006\u0004\b[\u0010\\\u001a\u0017\u0010]\u001a\u00020\u00022\u0006\u0010S\u001a\u00020\u000eH\u0002¢\u0006\u0004\b]\u0010^\u001a\u001f\u0010a\u001a\u00020`2\u0006\u0010@\u001a\u00020?2\u0006\u0010_\u001a\u00020\u0007H\u0002¢\u0006\u0004\ba\u0010b\u001aE\u0010f\u001a\u00020\u0018*\u00020:2\u0006\u0010\u0013\u001a\u00020\u00102\u0006\u00104\u001a\u00020\u00102\u0006\u0010\r\u001a\u00020\f2\u0006\u0010_\u001a\u00020\u00072\u0006\u0010c\u001a\u00020\u00072\b\u0010e\u001a\u0004\u0018\u00010dH\u0002¢\u0006\u0004\bf\u0010g\u001a\u0013\u0010h\u001a\u00020\u0018*\u00020:H\u0002¢\u0006\u0004\bh\u0010i\u001a\u001b\u0010l\u001a\u00020\u0018*\u00020j2\u0006\u0010k\u001a\u00020\u0007H\u0002¢\u0006\u0004\bl\u0010m\u001a\u001b\u0010o\u001a\u00020\u0018*\u00020j2\u0006\u0010O\u001a\u00020nH\u0002¢\u0006\u0004\bo\u0010p\u001a=\u0010t\u001a\u00020\u0018*\u00020:2\u0006\u0010q\u001a\u00020\u00072\u0006\u0010r\u001a\u00020?2\u0018\u0010s\u001a\u0014\u0012\u0004\u0012\u00020:\u0012\u0004\u0012\u00020?\u0012\u0004\u0012\u00020\u00180 H\u0002¢\u0006\u0004\bt\u0010u\u001a\u001b\u0010w\u001a\u00020\u0018*\u00020:2\u0006\u0010v\u001a\u00020\u0007H\u0002¢\u0006\u0004\bw\u0010x\u001a\u0013\u0010y\u001a\u00020\u0018*\u00020:H\u0002¢\u0006\u0004\by\u0010i\"\u0014\u0010{\u001a\u00020z8\u0002X\u0082T¢\u0006\u0006\n\u0004\b{\u0010|\"\u0014\u0010}\u001a\u00020z8\u0002X\u0082T¢\u0006\u0006\n\u0004\b}\u0010|\"\u0014\u0010~\u001a\u00020\u000e8\u0002X\u0082T¢\u0006\u0006\n\u0004\b~\u0010\u007f\"\u0016\u0010\u0080\u0001\u001a\u00020\u000e8\u0002X\u0082T¢\u0006\u0007\n\u0005\b\u0080\u0001\u0010\u007f\"\u0017\u0010\u0081\u0001\u001a\u00020\u00028\u0002X\u0082T¢\u0006\b\n\u0006\b\u0081\u0001\u0010\u0082\u0001\"\u0017\u0010\u0083\u0001\u001a\u00020\u00078\u0002X\u0082T¢\u0006\b\n\u0006\b\u0083\u0001\u0010\u0084\u0001¨\u0006\u0085\u0001"}, d2 = {"Landroid/graphics/Paint$FontMetrics;", "fontMetrics", "", "getBaselineHeightPx", "(Landroid/graphics/Paint$FontMetrics;)F", "Landroid/graphics/Paint;", "paint", "", "fontSizePx", "getBaselineHeightForFontSizePx", "(Landroid/graphics/Paint;I)F", "Lcom/discord/chat/bridge/structurabletext/StructurableText;", "Landroid/content/Context;", "context", "", "containerId", "", "animateEmoji", "showLinkDecorations", "shouldShowRoleDot", "shouldShowRoleOnName", "shouldForceRevealSpoilers", "Lkotlin/Function1;", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "", "onLinkClicked", "onLongTapLink", "Lkotlin/Function3;", "onTapChannel", "Lkotlin/Function4;", "onLongPressChannel", "onTapAttachmentLink", "Lkotlin/Function2;", "onLongPressAttachmentLink", "Lkotlin/Function6;", "onTapMention", "Lcom/discord/chat/bridge/contentnode/CommandMentionContentNode;", "onTapCommand", "onLongPressCommand", "Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "onTapGameMention", "onTapTimestamp", "Lcom/discord/chat/bridge/contentnode/InlineCodeContentNode;", "onTapInlineCode", "Lcom/discord/chat/bridge/contentnode/EmojiContentNode;", "onTapEmoji", "Lcom/discord/chat/presentation/textutils/LinkStyle;", "linkStyle", "Lkotlin/Function0;", "onTapSpoiler", "Lcom/discord/chat/bridge/contentnode/SoundmojiContentNode;", "onTapSoundmoji", "singleLine", "Lcom/discord/theme/DiscordThemeObject;", "theme", "baselineHeightPx", "emojiBaselineHeightOverridePx", "shouldOmitTopAndBottomHeadingSpacerNewLine", "Lcom/facebook/drawee/span/DraweeSpanStringBuilder;", "toSpannable", "(Lcom/discord/chat/bridge/structurabletext/StructurableText;Landroid/content/Context;Ljava/lang/String;ZZZZLandroid/graphics/Paint;ZLkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function3;Lkotlin/jvm/functions/Function4;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function6;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;ZLcom/discord/theme/DiscordThemeObject;FLjava/lang/Float;Z)Lcom/facebook/drawee/span/DraweeSpanStringBuilder;", "", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "Lcom/discord/chat/presentation/textutils/RenderContext;", "rc", "existingBuilder", "appendToExistingBuilder", "(Ljava/util/List;Lcom/discord/chat/presentation/textutils/RenderContext;Lcom/facebook/drawee/span/DraweeSpanStringBuilder;)V", "builder", "isRootNode", "(Ljava/util/List;Lcom/discord/chat/presentation/textutils/RenderContext;Lcom/facebook/drawee/span/DraweeSpanStringBuilder;Z)Lcom/facebook/drawee/span/DraweeSpanStringBuilder;", "imageUrl", "width", "height", ViewProps.FOREGROUND_COLOR, "cornerRadius", "iconPadding", "appendImage", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;Landroid/content/Context;Lcom/discord/chat/presentation/textutils/RenderContext;Ljava/lang/String;IILjava/lang/Integer;FF)V", "content", "isOrderedList", "appendBulletPoint", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;Ljava/util/List;Lcom/discord/chat/presentation/textutils/RenderContext;Z)V", "iconType", "", "getIconSizeMultiplier", "(Ljava/lang/String;)D", "baselineHeight", "getIconSize", "(Ljava/lang/String;F)I", "iconSizePx", "getGameMentionIconCornerRadius", "(I)F", "getIconPaddingMultiplier", "(Ljava/lang/String;)F", ViewProps.BACKGROUND_COLOR, "Lcom/discord/span/utilities/spannable/BackgroundSpan;", "makeMentionBackgroundSpan", "(Lcom/discord/chat/presentation/textutils/RenderContext;I)Lcom/discord/span/utilities/spannable/BackgroundSpan;", "roleColor", "Lcom/discord/chat/bridge/rolecolors/RoleColors;", "roleColors", "maybeAddRoleDot", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;ZZLandroid/content/Context;IILcom/discord/chat/bridge/rolecolors/RoleColors;)V", "simulateInlineNewline", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;)V", "Landroid/text/SpannableStringBuilder;", "spacingDp", "appendHorizontalSpacing", "(Landroid/text/SpannableStringBuilder;I)V", "", "appendInlineCodeWithPadding", "(Landroid/text/SpannableStringBuilder;Ljava/lang/CharSequence;)V", "textSizeSp", "renderContext", "action", "changeTextSizeSp", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;ILcom/discord/chat/presentation/textutils/RenderContext;Lkotlin/jvm/functions/Function2;)V", "size", "ensureTrailingSpacerNewLineOfSize", "(Lcom/facebook/drawee/span/DraweeSpanStringBuilder;I)V", "fixTrailingAbsoluteSizeSpanIfPresent", "", "FIRST_STRONG_ISOLATE", "C", "POP_DIRECTIONAL_ISOLATE", "CHANNEL_PREFIX", "Ljava/lang/String;", "COMMAND_PREFIX", "GAME_MENTION_ICON_CORNER_RADIUS_RATIO", "F", "INLINE_CODE_HORIZONTAL_PADDING_DP", "I", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTextUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TextUtils.kt\ncom/discord/chat/presentation/textutils/TextUtilsKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 SpannableStringBuilderExtensions.kt\ncom/discord/span/utilities/SpannableStringBuilderExtensionsKt\n+ 5 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 6 Uri.kt\nandroidx/core/net/UriKt\n+ 7 SpannedString.kt\nandroidx/core/text/SpannedStringKt\n*L\n1#1,1508:1\n1#2:1509\n1#2:1518\n1#2:1526\n1#2:1535\n1#2:1543\n1#2:1552\n1#2:1560\n1#2:1568\n1#2:1576\n1#2:1584\n1#2:1596\n1#2:1601\n1#2:1609\n1#2:1617\n1#2:1626\n1#2:1635\n1#2:1644\n1#2:1652\n1#2:1663\n1#2:1671\n1#2:1679\n1#2:1687\n1#2:1692\n1#2:1707\n1#2:1715\n1#2:1724\n1#2:1732\n1#2:1740\n1#2:1750\n1#2:1758\n1#2:1766\n1#2:1774\n1#2:1783\n1#2:1792\n1#2:1801\n1878#3,2:1510\n1878#3,2:1695\n1878#3,3:1697\n1880#3:1700\n1880#3:1743\n57#4,5:1512\n62#4:1520\n43#4,4:1521\n47#4:1528\n78#4:1529\n43#4,4:1530\n47#4:1537\n43#4,4:1538\n47#4:1545\n57#4,5:1546\n62#4:1554\n43#4,4:1555\n47#4:1562\n43#4,4:1563\n47#4:1570\n43#4,4:1571\n47#4:1578\n43#4,4:1579\n47#4:1586\n70#4:1587\n43#4,3:1588\n43#4,4:1591\n47#4:1598\n46#4:1599\n47#4:1603\n43#4,4:1604\n47#4:1611\n43#4,4:1612\n47#4:1619\n92#4:1620\n43#4,4:1621\n47#4:1628\n70#4:1629\n43#4,4:1630\n47#4:1637\n70#4:1638\n43#4,4:1639\n47#4:1646\n43#4,4:1647\n47#4:1654\n43#4,3:1655\n43#4,4:1658\n47#4:1665\n43#4,4:1666\n47#4:1673\n43#4,4:1674\n47#4:1681\n43#4,4:1682\n47#4:1689\n46#4:1690\n47#4:1694\n70#4:1701\n43#4,4:1702\n47#4:1709\n43#4,4:1710\n47#4:1717\n85#4:1718\n43#4,4:1719\n47#4:1726\n43#4,4:1727\n47#4:1734\n43#4,4:1735\n47#4:1742\n43#4,4:1745\n47#4:1752\n43#4,4:1753\n47#4:1760\n43#4,4:1761\n47#4:1768\n43#4,4:1769\n47#4:1776\n43#4,4:1778\n47#4:1785\n43#4,4:1787\n47#4:1794\n57#4,5:1795\n62#4:1803\n13472#5:1517\n13473#5:1519\n13472#5:1525\n13473#5:1527\n13472#5:1534\n13473#5:1536\n13472#5:1542\n13473#5:1544\n13472#5:1551\n13473#5:1553\n13472#5:1559\n13473#5:1561\n13472#5:1567\n13473#5:1569\n13472#5:1575\n13473#5:1577\n13472#5:1583\n13473#5:1585\n13472#5:1595\n13473#5:1597\n13472#5:1600\n13473#5:1602\n13472#5:1608\n13473#5:1610\n13472#5:1616\n13473#5:1618\n13472#5:1625\n13473#5:1627\n13472#5:1634\n13473#5:1636\n13472#5:1643\n13473#5:1645\n13472#5:1651\n13473#5:1653\n13472#5:1662\n13473#5:1664\n13472#5:1670\n13473#5:1672\n13472#5:1678\n13473#5:1680\n13472#5:1686\n13473#5:1688\n13472#5:1691\n13473#5:1693\n13472#5:1706\n13473#5:1708\n13472#5:1714\n13473#5:1716\n13472#5:1723\n13473#5:1725\n13472#5:1731\n13473#5:1733\n13472#5:1739\n13473#5:1741\n13472#5:1749\n13473#5:1751\n13472#5:1757\n13473#5:1759\n13472#5:1765\n13473#5:1767\n13472#5:1773\n13473#5:1775\n13472#5:1782\n13473#5:1784\n13472#5:1791\n13473#5:1793\n13472#5:1800\n13473#5:1802\n29#6:1744\n34#7:1777\n34#7:1786\n*S KotlinDebug\n*F\n+ 1 TextUtils.kt\ncom/discord/chat/presentation/textutils/TextUtilsKt\n*L\n381#1:1518\n395#1:1526\n405#1:1535\n425#1:1543\n471#1:1552\n566#1:1560\n604#1:1568\n642#1:1576\n676#1:1584\n742#1:1596\n741#1:1601\n761#1:1609\n827#1:1617\n835#1:1626\n881#1:1635\n900#1:1644\n916#1:1652\n946#1:1663\n947#1:1671\n957#1:1679\n959#1:1687\n945#1:1692\n1043#1:1707\n1073#1:1715\n1078#1:1724\n1171#1:1732\n1173#1:1740\n1280#1:1750\n1308#1:1758\n1400#1:1766\n1442#1:1774\n1488#1:1783\n1506#1:1792\n861#1:1801\n313#1:1510,2\n988#1:1695,2\n993#1:1697,3\n988#1:1700\n313#1:1743\n381#1:1512,5\n381#1:1520\n395#1:1521,4\n395#1:1528\n405#1:1529\n405#1:1530,4\n405#1:1537\n425#1:1538,4\n425#1:1545\n471#1:1546,5\n471#1:1554\n566#1:1555,4\n566#1:1562\n604#1:1563,4\n604#1:1570\n642#1:1571,4\n642#1:1578\n676#1:1579,4\n676#1:1586\n741#1:1587\n741#1:1588,3\n742#1:1591,4\n742#1:1598\n741#1:1599\n741#1:1603\n761#1:1604,4\n761#1:1611\n827#1:1612,4\n827#1:1619\n835#1:1620\n835#1:1621,4\n835#1:1628\n881#1:1629\n881#1:1630,4\n881#1:1637\n900#1:1638\n900#1:1639,4\n900#1:1646\n916#1:1647,4\n916#1:1654\n945#1:1655,3\n946#1:1658,4\n946#1:1665\n947#1:1666,4\n947#1:1673\n957#1:1674,4\n957#1:1681\n959#1:1682,4\n959#1:1689\n945#1:1690\n945#1:1694\n1043#1:1701\n1043#1:1702,4\n1043#1:1709\n1073#1:1710,4\n1073#1:1717\n1078#1:1718\n1078#1:1719,4\n1078#1:1726\n1171#1:1727,4\n1171#1:1734\n1173#1:1735,4\n1173#1:1742\n1280#1:1745,4\n1280#1:1752\n1308#1:1753,4\n1308#1:1760\n1400#1:1761,4\n1400#1:1768\n1442#1:1769,4\n1442#1:1776\n1488#1:1778,4\n1488#1:1785\n1506#1:1787,4\n1506#1:1794\n861#1:1795,5\n861#1:1803\n381#1:1517\n381#1:1519\n395#1:1525\n395#1:1527\n405#1:1534\n405#1:1536\n425#1:1542\n425#1:1544\n471#1:1551\n471#1:1553\n566#1:1559\n566#1:1561\n604#1:1567\n604#1:1569\n642#1:1575\n642#1:1577\n676#1:1583\n676#1:1585\n742#1:1595\n742#1:1597\n741#1:1600\n741#1:1602\n761#1:1608\n761#1:1610\n827#1:1616\n827#1:1618\n835#1:1625\n835#1:1627\n881#1:1634\n881#1:1636\n900#1:1643\n900#1:1645\n916#1:1651\n916#1:1653\n946#1:1662\n946#1:1664\n947#1:1670\n947#1:1672\n957#1:1678\n957#1:1680\n959#1:1686\n959#1:1688\n945#1:1691\n945#1:1693\n1043#1:1706\n1043#1:1708\n1073#1:1714\n1073#1:1716\n1078#1:1723\n1078#1:1725\n1171#1:1731\n1171#1:1733\n1173#1:1739\n1173#1:1741\n1280#1:1749\n1280#1:1751\n1308#1:1757\n1308#1:1759\n1400#1:1765\n1400#1:1767\n1442#1:1773\n1442#1:1775\n1488#1:1782\n1488#1:1784\n1506#1:1791\n1506#1:1793\n861#1:1800\n861#1:1802\n1212#1:1744\n1477#1:1777\n1505#1:1786\n*E\n"})
/* loaded from: classes.dex */
public final class TextUtilsKt {

    @NotNull
    private static final String CHANNEL_PREFIX = "#";

    @NotNull
    private static final String COMMAND_PREFIX = "/";
    private static final char FIRST_STRONG_ISOLATE = 8296;
    private static final float GAME_MENTION_ICON_CORNER_RADIUS_RATIO = 0.25f;
    private static final int INLINE_CODE_HORIZONTAL_PADDING_DP = 2;
    private static final char POP_DIRECTIONAL_ISOLATE = 8297;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[StaticChannelMentionType.values().length];
            try {
                iArr[StaticChannelMentionType.Home.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[StaticChannelMentionType.Guide.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[StaticChannelMentionType.Browse.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[StaticChannelMentionType.Customize.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[StaticChannelMentionType.LinkedRoles.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private static final void appendBulletPoint(DraweeSpanStringBuilder draweeSpanStringBuilder, List<? extends ContentNode> list, RenderContext renderContext, boolean z5) {
        Object obj;
        int dpToPx = SizeUtilsKt.getDpToPx(8);
        int listNestedLevel = renderContext.getListNestedLevel();
        LeadingMarginSpan.Standard standard = new LeadingMarginSpan.Standard(SizeUtilsKt.getDpToPx(listNestedLevel * 16));
        VerticalPaddingSpan verticalPaddingSpan = new VerticalPaddingSpan(SizeUtilsKt.getDpToPx(2));
        if (!z5) {
            if (renderContext.getSingleLine()) {
                appendToExistingBuilder(b0.c(new TextContentNode(renderContext.getListNestedLevel() == 0 ? "•  " : "◦  ")), renderContext, draweeSpanStringBuilder);
                appendToExistingBuilder(list, renderContext, draweeSpanStringBuilder);
                return;
            }
            BulletSpan bulletSpan = new BulletSpan(renderContext.spoilerIsHidden() ? renderContext.getTheme().getSpoilerHiddenBackground() : ColorUtilsKt.getThemeColor(renderContext.getContext(), R.color.primary_360, R.color.primary_400, renderContext.getTheme()), dpToPx, false, SizeUtilsKt.getDpToPx(2), 0.0f, listNestedLevel > 0 ? Paint.Style.STROKE : Paint.Style.FILL, 20, null);
            SpannableStringBuilderExtensionsKt.ensureNewline$default(draweeSpanStringBuilder, null, 1, null);
            Object[] objArr = {standard, bulletSpan, verticalPaddingSpan};
            int length = draweeSpanStringBuilder.length();
            appendToExistingBuilder(list, renderContext, draweeSpanStringBuilder);
            for (int i5 = 0; i5 < 3; i5++) {
                Object obj2 = objArr[i5];
                if (obj2 != null) {
                    draweeSpanStringBuilder.setSpan(obj2, length, draweeSpanStringBuilder.length(), 33);
                }
            }
            return;
        }
        Long listOrderedIndex = renderContext.getListOrderedIndex();
        long longValue = listOrderedIndex != null ? listOrderedIndex.longValue() : 1L;
        Long listLargestOrderedIndex = renderContext.getListLargestOrderedIndex();
        long longValue2 = listLargestOrderedIndex != null ? listLargestOrderedIndex.longValue() : 1L;
        if (renderContext.getSingleLine()) {
            appendToExistingBuilder(b0.c(new TextContentNode(longValue + ".  ")), renderContext, draweeSpanStringBuilder);
            appendToExistingBuilder(list, renderContext, draweeSpanStringBuilder);
            return;
        }
        long j = longValue;
        Integer num = null;
        Paint paint = renderContext.getPaint();
        if (renderContext.spoilerIsHidden()) {
            obj = null;
            num = Integer.valueOf(renderContext.getTheme().getSpoilerHiddenBackground());
        } else {
            obj = null;
        }
        OrderedListBulletSpan orderedListBulletSpan = new OrderedListBulletSpan(j, dpToPx, longValue2, paint, num);
        SpannableStringBuilderExtensionsKt.ensureNewline$default(draweeSpanStringBuilder, obj, 1, obj);
        Object[] objArr2 = {standard, orderedListBulletSpan, verticalPaddingSpan};
        int length2 = draweeSpanStringBuilder.length();
        appendToExistingBuilder(list, renderContext, draweeSpanStringBuilder);
        for (int i6 = 0; i6 < 3; i6++) {
            Object obj3 = objArr2[i6];
            if (obj3 != null) {
                draweeSpanStringBuilder.setSpan(obj3, length2, draweeSpanStringBuilder.length(), 33);
            }
        }
    }

    private static final void appendHorizontalSpacing(SpannableStringBuilder spannableStringBuilder, int i5) {
        Object[] objArr = {new HorizontalSpacerSpan(SizeUtilsKt.getDpToPx(i5))};
        int length = spannableStringBuilder.length();
        spannableStringBuilder.append((char) 8203);
        Object obj = objArr[0];
        if (obj != null) {
            spannableStringBuilder.setSpan(obj, length, spannableStringBuilder.length(), 33);
        }
    }

    public static final void appendImage(@NotNull DraweeSpanStringBuilder draweeSpanStringBuilder, @NotNull Context context, @NotNull RenderContext rc2, @NotNull String imageUrl, int i5, int i6, Integer num, float f2, float f10) {
        Intrinsics.checkNotNullParameter(draweeSpanStringBuilder, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(rc2, "rc");
        Intrinsics.checkNotNullParameter(imageUrl, "imageUrl");
        int length = draweeSpanStringBuilder.length();
        draweeSpanStringBuilder.append((char) 8203);
        Uri parse = Uri.parse(ReactAssetUtilsKt.getReactImageUrl(context, imageUrl));
        ImageRequestBuilder d6 = ImageRequestBuilder.d(parse);
        Intrinsics.checkNotNullExpressionValue(d6, "newBuilderWithSource(...)");
        ImageRequestBuilder applyDiscordDiskCachePolicy = DiskCachePolicyKt.applyDiscordDiskCachePolicy(d6, parse);
        PipelineDraweeControllerBuilder pipelineDraweeControllerBuilder = d9.a.f7432b.get();
        pipelineDraweeControllerBuilder.f4415b = applyDiscordDiskCachePolicy.a();
        g9.c a = pipelineDraweeControllerBuilder.a();
        Intrinsics.checkNotNullExpressionValue(a, "build(...)");
        GenericDraweeHierarchyBuilder genericDraweeHierarchyBuilder = new GenericDraweeHierarchyBuilder(context.getResources());
        genericDraweeHierarchyBuilder.f4492l = o.f4473f;
        j9.b bVar = new j9.b();
        float[] fArr = new float[8];
        bVar.f12432c = fArr;
        Arrays.fill(fArr, f2);
        h.b("the padding cannot be < 0", f10 >= 0.0f);
        bVar.f12436g = f10;
        bVar.a = 2;
        genericDraweeHierarchyBuilder.f4497q = bVar;
        if (rc2.spoilerIsHidden()) {
            genericDraweeHierarchyBuilder.f4493m = new PorterDuffColorFilter(rc2.getTheme().getSpoilerHiddenBackground(), PorterDuff.Mode.SRC_IN);
        } else if (num != null) {
            genericDraweeHierarchyBuilder.f4493m = new PorterDuffColorFilter(num.intValue(), PorterDuff.Mode.SRC_IN);
        }
        Intrinsics.checkNotNullExpressionValue(genericDraweeHierarchyBuilder, "apply(...)");
        draweeSpanStringBuilder.c(genericDraweeHierarchyBuilder.a(), a, length, i5, i6, 2);
    }

    public static /* synthetic */ void appendImage$default(DraweeSpanStringBuilder draweeSpanStringBuilder, Context context, RenderContext renderContext, String str, int i5, int i6, Integer num, float f2, float f10, int i10, Object obj) {
        float f11;
        DraweeSpanStringBuilder draweeSpanStringBuilder2;
        Context context2;
        RenderContext renderContext2;
        String str2;
        int i11;
        int i12;
        Integer num2 = (i10 & 32) != 0 ? null : num;
        float f12 = (i10 & 64) != 0 ? 0.0f : f2;
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            f11 = 0.0f;
            context2 = context;
            renderContext2 = renderContext;
            str2 = str;
            i11 = i5;
            i12 = i6;
            draweeSpanStringBuilder2 = draweeSpanStringBuilder;
        } else {
            f11 = f10;
            draweeSpanStringBuilder2 = draweeSpanStringBuilder;
            context2 = context;
            renderContext2 = renderContext;
            str2 = str;
            i11 = i5;
            i12 = i6;
        }
        appendImage(draweeSpanStringBuilder2, context2, renderContext2, str2, i11, i12, num2, f12, f11);
    }

    private static final void appendInlineCodeWithPadding(SpannableStringBuilder spannableStringBuilder, CharSequence charSequence) {
        if (charSequence.length() == 0) {
            return;
        }
        appendHorizontalSpacing(spannableStringBuilder, 2);
        spannableStringBuilder.append((char) 8288);
        spannableStringBuilder.append(charSequence);
        spannableStringBuilder.append((char) 8288);
        appendHorizontalSpacing(spannableStringBuilder, 2);
    }

    private static final void appendToExistingBuilder(List<? extends ContentNode> list, RenderContext renderContext, DraweeSpanStringBuilder draweeSpanStringBuilder) {
        toSpannable(list, renderContext, draweeSpanStringBuilder, false);
    }

    private static final void changeTextSizeSp(DraweeSpanStringBuilder draweeSpanStringBuilder, int i5, RenderContext renderContext, Function2<? super DraweeSpanStringBuilder, ? super RenderContext, Unit> function2) {
        int scaledSpToPx = FontManager.INSTANCE.getScaledSpToPx(i5, renderContext.getContext());
        RenderContext copy$default = RenderContext.copy$default(renderContext, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, null, null, false, null, null, getBaselineHeightForFontSizePx(renderContext.getPaint(), scaledSpToPx), null, false, -1, 4, null);
        Object[] objArr = {new AbsoluteSizeSpan(scaledSpToPx)};
        int length = draweeSpanStringBuilder.length();
        function2.invoke(draweeSpanStringBuilder, copy$default);
        Object obj = objArr[0];
        if (obj != null) {
            draweeSpanStringBuilder.setSpan(obj, length, draweeSpanStringBuilder.length(), 33);
        }
    }

    private static final void ensureTrailingSpacerNewLineOfSize(DraweeSpanStringBuilder draweeSpanStringBuilder, int i5) {
        if (draweeSpanStringBuilder.length() > 0) {
            SpannableStringBuilderExtensionsKt.ensureNewline$default(draweeSpanStringBuilder, null, 1, null);
            VerticalSpacerSpan verticalSpacerSpan = (VerticalSpacerSpan) x.t(draweeSpanStringBuilder.getSpans(draweeSpanStringBuilder.length() - 1, draweeSpanStringBuilder.length(), VerticalSpacerSpan.class));
            if (verticalSpacerSpan != null) {
                if (verticalSpacerSpan.getSize() < i5) {
                    SpannableStringBuilderExtensionsKt.replaceSpan(draweeSpanStringBuilder, verticalSpacerSpan, new VerticalSpacerSpan(i5));
                    return;
                }
                return;
            }
        }
        Object[] objArr = {new VerticalSpacerSpan(i5)};
        int length = draweeSpanStringBuilder.length();
        draweeSpanStringBuilder.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        Object obj = objArr[0];
        if (obj != null) {
            draweeSpanStringBuilder.setSpan(obj, length, draweeSpanStringBuilder.length(), 33);
        }
    }

    private static final void fixTrailingAbsoluteSizeSpanIfPresent(DraweeSpanStringBuilder draweeSpanStringBuilder) {
        AbsoluteSizeSpan absoluteSizeSpan;
        if (StringsKt.F(draweeSpanStringBuilder, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE) && (absoluteSizeSpan = (AbsoluteSizeSpan) x.t(draweeSpanStringBuilder.getSpans(draweeSpanStringBuilder.length() - 1, draweeSpanStringBuilder.length(), AbsoluteSizeSpan.class))) != null) {
            Object[] objArr = {new AbsoluteSizeSpan(absoluteSizeSpan.getSize())};
            int length = draweeSpanStringBuilder.length();
            draweeSpanStringBuilder.append("\u200b");
            Object obj = objArr[0];
            if (obj != null) {
                draweeSpanStringBuilder.setSpan(obj, length, draweeSpanStringBuilder.length(), 33);
            }
        }
    }

    public static final float getBaselineHeightForFontSizePx(@NotNull Paint paint, int i5) {
        Intrinsics.checkNotNullParameter(paint, "paint");
        float textSize = paint.getTextSize();
        paint.setTextSize(i5);
        Paint.FontMetrics fontMetrics = paint.getFontMetrics();
        Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
        float baselineHeightPx = getBaselineHeightPx(fontMetrics);
        paint.setTextSize(textSize);
        return baselineHeightPx;
    }

    public static final float getBaselineHeightPx(@NotNull Paint.FontMetrics fontMetrics) {
        Intrinsics.checkNotNullParameter(fontMetrics, "fontMetrics");
        return fontMetrics.descent - fontMetrics.ascent;
    }

    private static final float getGameMentionIconCornerRadius(int i5) {
        return i5 * GAME_MENTION_ICON_CORNER_RADIUS_RATIO;
    }

    private static final float getIconPaddingMultiplier(String str) {
        return (Intrinsics.areEqual(str, "post") || Intrinsics.areEqual(str, "forum")) ? 0.2f : 0.0f;
    }

    public static final int getIconSize(String str, float f2) {
        return f2 >= 0.0f ? (int) (f2 * getIconSizeMultiplier(str)) : SizeUtilsKt.getDpToPx(20);
    }

    private static final double getIconSizeMultiplier(String str) {
        if (str == null) {
            return 0.75d;
        }
        switch (str.hashCode()) {
            case -1480766844:
                return !str.equals("_caret") ? 0.75d : 0.55d;
            case -1478565049:
                return !str.equals("_emoji") ? 0.75d : 0.963d;
            case -1476485388:
                return !str.equals("_guild") ? 0.75d : 0.85d;
            case 3446944:
                return !str.equals("post") ? 0.75d : 0.65d;
            case 97619233:
                return !str.equals("forum") ? 0.75d : 0.65d;
            default:
                return 0.75d;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static final BackgroundSpan makeMentionBackgroundSpan(RenderContext renderContext, int i5) {
        if (renderContext.spoilerIsHidden()) {
            i5 = renderContext.getTheme().getSpoilerHiddenBackground();
        }
        return new BackgroundSpan(new BackgroundStyle(i5, renderContext.spoilerIsHidden() ? 0 : 3, 0, 4, (DefaultConstructorMarker) null), 0 == true ? 1 : 0, null, 6, null);
    }

    private static final void maybeAddRoleDot(DraweeSpanStringBuilder draweeSpanStringBuilder, boolean z5, boolean z6, Context context, int i5, int i6, RoleColors roleColors) {
        if (z5) {
            RoleDotSpan roleDotSpan = new RoleDotSpan(context, i5, z6 ? 16 : 20);
            if (roleColors == null) {
                roleColors = new RoleColors(i6, null, null);
            }
            roleDotSpan.setColors(roleColors);
            draweeSpanStringBuilder.append(CHANNEL_PREFIX);
            draweeSpanStringBuilder.setSpan(roleDotSpan, draweeSpanStringBuilder.length() - 1, draweeSpanStringBuilder.length(), 33);
            draweeSpanStringBuilder.append(" ");
        }
    }

    private static final void simulateInlineNewline(DraweeSpanStringBuilder draweeSpanStringBuilder) {
        draweeSpanStringBuilder.append("    ");
    }

    @NotNull
    public static final DraweeSpanStringBuilder toSpannable(@NotNull StructurableText structurableText, @NotNull Context context, @NotNull String containerId, boolean z5, boolean z6, boolean z7, boolean z8, @NotNull Paint paint, boolean z10, @NotNull Function1<? super LinkContentNode, Unit> onLinkClicked, @NotNull Function1<? super LinkContentNode, Unit> onLongTapLink, @NotNull Function3 onTapChannel, @NotNull Function4 onLongPressChannel, @NotNull Function1<? super String, Unit> onTapAttachmentLink, @NotNull Function2<? super String, ? super String, Unit> onLongPressAttachmentLink, @NotNull Function6 onTapMention, @NotNull Function1<? super CommandMentionContentNode, Unit> onTapCommand, @NotNull Function1<? super CommandMentionContentNode, Unit> onLongPressCommand, @NotNull Function1<? super GameMentionContentNode, Unit> onTapGameMention, @NotNull Function1<? super String, Unit> onTapTimestamp, @NotNull Function1<? super InlineCodeContentNode, Unit> onTapInlineCode, @NotNull Function1<? super EmojiContentNode, Unit> onTapEmoji, @NotNull Function1<? super LinkContentNode, LinkStyle> linkStyle, @NotNull Function0<Unit> onTapSpoiler, @NotNull Function1<? super SoundmojiContentNode, Unit> onTapSoundmoji, boolean z11, @NotNull DiscordThemeObject theme, float f2, Float f10, boolean z12) {
        DraweeSpanStringBuilder draweeSpanStringBuilder;
        Intrinsics.checkNotNullParameter(structurableText, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(containerId, "containerId");
        Intrinsics.checkNotNullParameter(paint, "paint");
        Intrinsics.checkNotNullParameter(onLinkClicked, "onLinkClicked");
        Intrinsics.checkNotNullParameter(onLongTapLink, "onLongTapLink");
        Intrinsics.checkNotNullParameter(onTapChannel, "onTapChannel");
        Intrinsics.checkNotNullParameter(onLongPressChannel, "onLongPressChannel");
        Intrinsics.checkNotNullParameter(onTapAttachmentLink, "onTapAttachmentLink");
        Intrinsics.checkNotNullParameter(onLongPressAttachmentLink, "onLongPressAttachmentLink");
        Intrinsics.checkNotNullParameter(onTapMention, "onTapMention");
        Intrinsics.checkNotNullParameter(onTapCommand, "onTapCommand");
        Intrinsics.checkNotNullParameter(onLongPressCommand, "onLongPressCommand");
        Intrinsics.checkNotNullParameter(onTapGameMention, "onTapGameMention");
        Intrinsics.checkNotNullParameter(onTapTimestamp, "onTapTimestamp");
        Intrinsics.checkNotNullParameter(onTapInlineCode, "onTapInlineCode");
        Intrinsics.checkNotNullParameter(onTapEmoji, "onTapEmoji");
        Intrinsics.checkNotNullParameter(linkStyle, "linkStyle");
        Intrinsics.checkNotNullParameter(onTapSpoiler, "onTapSpoiler");
        Intrinsics.checkNotNullParameter(onTapSoundmoji, "onTapSoundmoji");
        Intrinsics.checkNotNullParameter(theme, "theme");
        if (structurableText instanceof AnnotatedStructurableText) {
            draweeSpanStringBuilder = toSpannable$default(((AnnotatedStructurableText) structurableText).getContent(), new RenderContext(context, containerId, onLinkClicked, onLongTapLink, linkStyle, onTapChannel, onLongPressChannel, onTapAttachmentLink, onLongPressAttachmentLink, onTapMention, onTapCommand, onLongPressCommand, onTapGameMention, onTapSpoiler, onTapTimestamp, onTapInlineCode, onTapEmoji, onTapSoundmoji, z5, z6, z10, z7, z8, z11, paint, null, 0, null, null, false, null, theme, f2, f10, z12, 2113929216, 0, null), null, false, 6, null);
        } else {
            if (!(structurableText instanceof PrimitiveStructurableText)) {
                throw new n();
            }
            draweeSpanStringBuilder = new DraweeSpanStringBuilder(((PrimitiveStructurableText) structurableText).getContent());
        }
        SpannableExtensionsKt.alignLeadingMarginsToParagraphs(draweeSpanStringBuilder);
        return draweeSpanStringBuilder;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$0(LinkContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$1(LinkContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$10(String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$11(InlineCodeContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$12(EmojiContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final LinkStyle toSpannable$lambda$13(LinkContentNode linkContentNode) {
        Intrinsics.checkNotNullParameter(linkContentNode, "<unused var>");
        return new LinkStyle(null, 0, null, null, 15, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$15(SoundmojiContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$2(String str, String str2, String str3) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$3(String str, String str2, String str3, String str4) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$4(String str) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$5(String str, String str2) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        Intrinsics.checkNotNullParameter(str2, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$6(String str, String str2, String str3, String str4, String str5, String str6) {
        Intrinsics.checkNotNullParameter(str2, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$7(CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final RenderContext.Insets toSpannable$lambda$72$lambda$18$lambda$17(QuoteSpan quoteSpan, RenderContext.Insets updateInsets) {
        Intrinsics.checkNotNullParameter(updateInsets, "$this$updateInsets");
        return RenderContext.Insets.copy$default(updateInsets, 0, 0, quoteSpan.getInsetStart() + updateInsets.getStart(), 0, 11, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$21(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapInlineCode().invoke(contentNode);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean toSpannable$lambda$72$lambda$23(ContentNode contentNode, RenderContext renderContext, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        if (!((LinkContentNode) contentNode).getIsUrl()) {
            return false;
        }
        renderContext.getOnLongTapLink().invoke(contentNode);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$24(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapLink().invoke(contentNode);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$28(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        Function6 onTapMention = renderContext.getOnTapMention();
        UserOrRoleMentionContentNode userOrRoleMentionContentNode = (UserOrRoleMentionContentNode) contentNode;
        UserId m431getUserIdwUX8bhU = userOrRoleMentionContentNode.m431getUserIdwUX8bhU();
        String m1248toStringimpl = m431getUserIdwUX8bhU != null ? UserId.m1248toStringimpl(m431getUserIdwUX8bhU.m1250unboximpl()) : null;
        String valueOf = String.valueOf(userOrRoleMentionContentNode.m428getChannelIdqMVnFVQ());
        String roleName = userOrRoleMentionContentNode.getRoleName();
        String str = roleName != null ? roleName.toString() : null;
        String parsedUserId = userOrRoleMentionContentNode.getParsedUserId();
        String str2 = parsedUserId != null ? parsedUserId.toString() : null;
        RoleId m430getRoleIdfYaclRY = userOrRoleMentionContentNode.m430getRoleIdfYaclRY();
        String m1222toStringimpl = m430getRoleIdfYaclRY != null ? RoleId.m1222toStringimpl(m430getRoleIdfYaclRY.m1224unboximpl()) : null;
        GuildId m429getGuildIdqOKuAAo = userOrRoleMentionContentNode.m429getGuildIdqOKuAAo();
        onTapMention.invoke(m1248toStringimpl, valueOf, str, str2, m1222toStringimpl, m429getGuildIdqOKuAAo != null ? GuildId.m1183toStringimpl(m429getGuildIdqOKuAAo.m1185unboximpl()) : null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean toSpannable$lambda$72$lambda$30(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        ChannelMentionContentNode channelMentionContentNode = (ChannelMentionContentNode) contentNode;
        renderContext.getOnLongPressChannel().invoke(channelMentionContentNode.getChannelId(), channelMentionContentNode.getGuildId(), channelMentionContentNode.getMessageId(), channelMentionContentNode.getOriginalLink());
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$31(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        ChannelMentionContentNode channelMentionContentNode = (ChannelMentionContentNode) contentNode;
        renderContext.getOnTapChannel().invoke(channelMentionContentNode.getChannelId(), channelMentionContentNode.getGuildId(), channelMentionContentNode.getMessageId());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean toSpannable$lambda$72$lambda$34(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        AttachmentLinkContentNode attachmentLinkContentNode = (AttachmentLinkContentNode) contentNode;
        renderContext.getOnLongPressAttachmentLink().invoke(attachmentLinkContentNode.getAttachmentUrl(), attachmentLinkContentNode.getAttachmentName());
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$35(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapAttachmentLink().invoke(((AttachmentLinkContentNode) contentNode).getAttachmentUrl());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$37(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        StaticChannelMentionContentNode staticChannelMentionContentNode = (StaticChannelMentionContentNode) contentNode;
        renderContext.getOnTapChannel().invoke(staticChannelMentionContentNode.getId().getId(), String.valueOf(staticChannelMentionContentNode.m421getGuildIdqOKuAAo()), String.valueOf(staticChannelMentionContentNode.getItemId()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean toSpannable$lambda$72$lambda$39(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnLongPressCommand().invoke(contentNode);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$40(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapCommand().invoke(contentNode);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$43(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapGameMention().invoke(contentNode);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$45(String str, RenderContext renderContext) {
        SpoilerManager.INSTANCE.m465markRevealedV2PEE7g(str);
        renderContext.getOnTapSpoiler().invoke();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$47$lambda$46(Function0 function0, View view) {
        Intrinsics.checkNotNullParameter(view, "<unused var>");
        function0.invoke();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$51(DraweeSpanStringBuilder draweeSpanStringBuilder, ForegroundColorSpan foregroundColorSpan, ContentNode contentNode, DraweeSpanStringBuilder changeTextSizeSp, RenderContext updatedRC) {
        Intrinsics.checkNotNullParameter(changeTextSizeSp, "$this$changeTextSizeSp");
        Intrinsics.checkNotNullParameter(updatedRC, "updatedRC");
        int length = draweeSpanStringBuilder.length();
        appendToExistingBuilder(((SubtextContentNode) contentNode).getContent(), updatedRC, draweeSpanStringBuilder);
        Object obj = new Object[]{foregroundColorSpan}[0];
        if (obj != null) {
            draweeSpanStringBuilder.setSpan(obj, length, draweeSpanStringBuilder.length(), 13107233);
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$54$lambda$53(ContentNode contentNode, DraweeSpanStringBuilder draweeSpanStringBuilder, DraweeSpanStringBuilder changeTextSizeSp, RenderContext updatedRc) {
        Intrinsics.checkNotNullParameter(changeTextSizeSp, "$this$changeTextSizeSp");
        Intrinsics.checkNotNullParameter(updatedRc, "updatedRc");
        appendToExistingBuilder(((HeadingContentNode) contentNode).getContent(), updatedRc, draweeSpanStringBuilder);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$65(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapTimestamp().invoke(((TimestampContentNode) contentNode).getFull());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$68(RenderContext renderContext, ContentNode contentNode, View it) {
        Intrinsics.checkNotNullParameter(it, "it");
        renderContext.getOnTapSoundmoji().invoke(contentNode);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$71(DraweeSpanStringBuilder draweeSpanStringBuilder, ContentNode contentNode, Context context, RenderContext renderContext, SpannableStringBuilder spannableStringBuilder) {
        DraweeSpanStringBuilder draweeSpanStringBuilder2;
        Intrinsics.checkNotNullParameter(spannableStringBuilder, "<this>");
        draweeSpanStringBuilder.append("  ");
        SoundmojiContentNode soundmojiContentNode = (SoundmojiContentNode) contentNode;
        RenderableEmoji renderableEmoji = SoundmojiContentNodeKt.toRenderableEmoji(soundmojiContentNode);
        if (renderableEmoji != null) {
            Float emojiBaselineHeightOverridePx = renderContext.getEmojiBaselineHeightOverridePx();
            draweeSpanStringBuilder2 = draweeSpanStringBuilder;
            RenderableEmojiKt.renderEmojiInto$default(draweeSpanStringBuilder2, renderableEmoji, context, getIconSize("_emoji", (emojiBaselineHeightOverridePx != null ? emojiBaselineHeightOverridePx.floatValue() : renderContext.getBaselineHeightPx()) * 0.8f), false, 0, new b(renderContext, 1), 32, null);
            draweeSpanStringBuilder2.append(" ");
        } else {
            draweeSpanStringBuilder2 = draweeSpanStringBuilder;
        }
        String content = soundmojiContentNode.getContent();
        draweeSpanStringBuilder2.append((CharSequence) (content != null ? kotlin.text.x.l(content, " ", " ", false) : null));
        draweeSpanStringBuilder2.append("  ");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$72$lambda$71$lambda$70$lambda$69(RenderContext renderContext, GenericDraweeHierarchyBuilder renderEmojiInto) {
        Intrinsics.checkNotNullParameter(renderEmojiInto, "$this$renderEmojiInto");
        EmojiRendererKt.handleEmojiSpoiler(renderEmojiInto, renderContext, true);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$8(CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toSpannable$lambda$9(GameMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:176:0x054f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static final DraweeSpanStringBuilder toSpannable(List<? extends ContentNode> list, final RenderContext renderContext, DraweeSpanStringBuilder draweeSpanStringBuilder, boolean z5) {
        int backgroundCode;
        Integer num;
        boolean z6;
        boolean z7;
        DraweeSpanStringBuilder draweeSpanStringBuilder2;
        int spoilerRevealedBackground;
        long j;
        long j5;
        boolean o6;
        boolean o7;
        boolean o10;
        boolean o11;
        int mobileTextHeadingPrimary;
        int i5;
        int dpToPx;
        int i6;
        int i10;
        int spoilerHiddenBackground;
        int i11;
        DraweeSpanStringBuilder draweeSpanStringBuilder3;
        final RenderContext renderContext2;
        DraweeSpanStringBuilder draweeSpanStringBuilder4;
        int i12;
        int e9;
        Object foregroundColorSpan;
        int i13;
        BackgroundSpan backgroundSpan;
        boolean z8;
        int i14;
        ContentNode contentNode;
        BackgroundSpan backgroundSpan2;
        RelativeSizeSpan relativeSizeSpan;
        DiscordFontSpan discordFontSpan;
        ForegroundColorSpan foregroundColorSpan2;
        ClickableSpan clickableSpan;
        RenderContext renderContext3 = renderContext;
        DraweeSpanStringBuilder draweeSpanStringBuilder5 = draweeSpanStringBuilder;
        Integer num2 = -1;
        int i15 = 0;
        for (Object obj : list) {
            int i16 = i15 + 1;
            if (i15 >= 0) {
                ContentNode contentNode2 = (ContentNode) obj;
                boolean z10 = i15 == c0.f(list);
                Context context = renderContext3.getContext();
                if (renderContext3.spoilerIsHidden()) {
                    backgroundCode = renderContext3.getTheme().getSpoilerHiddenBackground();
                } else {
                    backgroundCode = renderContext3.getTheme().getBackgroundCode();
                }
                BackgroundSpan backgroundSpan3 = new BackgroundSpan(new BackgroundStyle(backgroundCode, 4, 0, 4, (DefaultConstructorMarker) null), renderContext3.spoilerIsHidden() ? null : new BorderStyle(renderContext3.getTheme().getBorderNormal(), SizeUtilsKt.getDpToPx(1)), null, 4, null);
                RelativeSizeSpan relativeSizeSpan2 = new RelativeSizeSpan(0.85f);
                DiscordFontSpan discordFontSpan2 = new DiscordFontSpan(context, DiscordFont.CodeNormal);
                int themeColor = ColorUtilsKt.getThemeColor(context, com.discord.chat.R.color.chat_mentions_background_light, com.discord.chat.R.color.chat_mentions_background_dark, renderContext3.getTheme());
                int themeColor2 = ColorUtilsKt.getThemeColor(context, com.discord.chat.R.color.chat_mentions_foreground_light, com.discord.chat.R.color.chat_mentions_foreground_dark, renderContext3.getTheme());
                int i17 = R.color.green_330;
                int e10 = b1.c.e(ColorUtilsKt.getThemeColor(context, i17, i17, renderContext3.getTheme()), 25);
                int i18 = R.color.green_330;
                int themeColor3 = ColorUtilsKt.getThemeColor(context, i18, i18, renderContext3.getTheme());
                int i19 = 0;
                if (contentNode2 instanceof BlockQuoteContentNode) {
                    if (renderContext3.getSingleLine()) {
                        draweeSpanStringBuilder5.append("> ");
                        appendToExistingBuilder(((BlockQuoteContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                    } else {
                        QuoteSpan quoteSpan = new QuoteSpan(renderContext3.spoilerIsHidden() ? renderContext3.getTheme().getSpoilerHiddenBackground() : renderContext3.getTheme().getSpineDefault(), SizeUtilsKt.getDpToPx(4), SizeUtilsKt.getDpToPx(8));
                        ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, SizeUtilsKt.getDpToPx(2));
                        int length = draweeSpanStringBuilder5.length();
                        appendToExistingBuilder(((BlockQuoteContentNode) contentNode2).getContent(), renderContext3.updateInsets(new e1(11, quoteSpan)), draweeSpanStringBuilder5);
                        Object obj2 = new Object[]{quoteSpan}[0];
                        if (obj2 != null) {
                            draweeSpanStringBuilder5.setSpan(obj2, length, draweeSpanStringBuilder5.length(), 13107233);
                        }
                        ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, SizeUtilsKt.getDpToPx(2));
                    }
                    Unit unit = Unit.a;
                } else {
                    final int i20 = 3;
                    if (contentNode2 instanceof CodeBlockContentNode) {
                        if (renderContext3.getSingleLine()) {
                            Object[] objArr = {backgroundSpan3, relativeSizeSpan2, discordFontSpan2};
                            int length2 = draweeSpanStringBuilder5.length();
                            appendInlineCodeWithPadding(draweeSpanStringBuilder5, kotlin.text.x.m(((CodeBlockContentNode) contentNode2).getContent(), '\n', ' '));
                            for (int i21 = 0; i21 < 3; i21++) {
                                Object obj3 = objArr[i21];
                                if (obj3 != null) {
                                    draweeSpanStringBuilder5.setSpan(obj3, length2, draweeSpanStringBuilder5.length(), 33);
                                }
                            }
                        } else {
                            CodeStyle.INSTANCE.renderCodeBlock(draweeSpanStringBuilder5, (CodeBlockContentNode) contentNode2, renderContext3);
                            Unit unit2 = Unit.a;
                        }
                    } else if (contentNode2 instanceof EmojiContentNode) {
                        EmojiRendererKt.renderEmoji(draweeSpanStringBuilder5, (EmojiContentNode) contentNode2, renderContext3);
                        Unit unit3 = Unit.a;
                    } else if (contentNode2 instanceof EmphasisContentNode) {
                        Object[] objArr2 = {new GGSansItalicSpan(renderContext3.getContext())};
                        int length3 = draweeSpanStringBuilder5.length();
                        appendToExistingBuilder(((EmphasisContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                        Object obj4 = objArr2[0];
                        if (obj4 != null) {
                            draweeSpanStringBuilder5.setSpan(obj4, length3, draweeSpanStringBuilder5.length(), 33);
                        }
                    } else {
                        if (contentNode2 instanceof InlineCodeContentNode) {
                            if (renderContext3.getInLink()) {
                                contentNode = contentNode2;
                                num = num2;
                                backgroundSpan2 = backgroundSpan3;
                                relativeSizeSpan = relativeSizeSpan2;
                                discordFontSpan = discordFontSpan2;
                                foregroundColorSpan2 = null;
                                clickableSpan = null;
                            } else {
                                Integer num3 = num2;
                                discordFontSpan = discordFontSpan2;
                                backgroundSpan2 = backgroundSpan3;
                                foregroundColorSpan2 = null;
                                contentNode = contentNode2;
                                relativeSizeSpan = relativeSizeSpan2;
                                num = num3;
                                clickableSpan = new ClickableSpan(null, num3, null, null, 0.0f, null, null, false, new b7.a(23, renderContext3, (InlineCodeContentNode) contentNode2), 253, null);
                            }
                            Object[] objArr3 = {clickableSpan, backgroundSpan2, relativeSizeSpan, discordFontSpan, !renderContext.getInLink() ? new ForegroundColorSpan(renderContext.getTheme().getTextDefault()) : foregroundColorSpan2};
                            int length4 = draweeSpanStringBuilder5.length();
                            appendInlineCodeWithPadding(draweeSpanStringBuilder5, ((InlineCodeContentNode) contentNode).getContent());
                            for (int i22 = 0; i22 < 5; i22++) {
                                Object obj5 = objArr3[i22];
                                if (obj5 != null) {
                                    draweeSpanStringBuilder5.setSpan(obj5, length4, draweeSpanStringBuilder5.length(), 33);
                                }
                            }
                            renderContext3 = renderContext;
                        } else {
                            num = num2;
                            if (!(contentNode2 instanceof LineBreakContentNode) && !(contentNode2 instanceof NewLineContentNode)) {
                                if (contentNode2 instanceof LinkContentNode) {
                                    LinkStyle linkStyle = (LinkStyle) renderContext.getLinkStyle().invoke(contentNode2);
                                    LinkContentNode linkContentNode = (LinkContentNode) contentNode2;
                                    Integer linkColor = linkContentNode.getLinkColor();
                                    int intValue = linkColor != null ? linkColor.intValue() : linkStyle.getLinkColor();
                                    Boolean shouldShowRoleDot = linkContentNode.getShouldShowRoleDot();
                                    Boolean bool = Boolean.TRUE;
                                    boolean areEqual = Intrinsics.areEqual(shouldShowRoleDot, bool);
                                    RoleColors androidColors = RoleColorsKt.toAndroidColors(linkContentNode.getRoleColors());
                                    RoleColors roleColors = areEqual ? null : androidColors;
                                    ClickableSpan clickableSpan2 = new ClickableSpan(null, Integer.valueOf(roleColors != null ? roleColors.getPrimaryColor() : intValue), roleColors != null ? roleColors.getSecondaryColor() : null, roleColors != null ? roleColors.getTertiaryColor() : null, 150.0f, Boolean.valueOf(renderContext.getShowLinkDecorations()), new e(linkContentNode, renderContext), false, new e(renderContext, linkContentNode), 129, null);
                                    LinkBackgroundStyle backgroundStyle = linkStyle.getBackgroundStyle();
                                    if (backgroundStyle != null) {
                                        Integer color = backgroundStyle.getColor();
                                        int intValue2 = color != null ? color.intValue() : 0;
                                        Integer borderRadius = backgroundStyle.getBorderRadius();
                                        BackgroundSpan backgroundSpan4 = new BackgroundSpan(new BackgroundStyle(intValue2, borderRadius != null ? borderRadius.intValue() : 0, 0, 4, (DefaultConstructorMarker) null), null == true ? 1 : 0, null, 6, null);
                                        Boolean spaceAround = backgroundStyle.getSpaceAround();
                                        boolean booleanValue = spaceAround != null ? spaceAround.booleanValue() : false;
                                        Unit unit4 = Unit.a;
                                        z8 = booleanValue;
                                        backgroundSpan = backgroundSpan4;
                                    } else {
                                        backgroundSpan = null;
                                        z8 = false;
                                    }
                                    Object[] objArr4 = {clickableSpan2, new DiscordFontSpan(renderContext.getContext(), Intrinsics.areEqual(linkContentNode.getMedium(), bool) ? DiscordFont.PrimaryMedium : linkStyle.getFont()), backgroundSpan};
                                    int length5 = draweeSpanStringBuilder5.length();
                                    Integer bindUserMenuRoleColor = linkContentNode.getBindUserMenuRoleColor();
                                    if (bindUserMenuRoleColor != null) {
                                        intValue = bindUserMenuRoleColor.intValue();
                                    }
                                    maybeAddRoleDot(draweeSpanStringBuilder5, areEqual, renderContext.getSingleLine(), context, themeColor, intValue, androidColors);
                                    if (z8) {
                                        draweeSpanStringBuilder5.append(' ');
                                    }
                                    int iconSize = getIconSize(null, renderContext.getBaselineHeightPx());
                                    ReactAsset icon = linkStyle.getIcon();
                                    if (icon != null) {
                                        appendImage$default(draweeSpanStringBuilder5, context, renderContext, ReactAssetExtensionsKt.getUri(icon, context), iconSize, iconSize, Integer.valueOf(linkStyle.getLinkColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                        draweeSpanStringBuilder5.append(' ');
                                    }
                                    int i23 = length5;
                                    appendToExistingBuilder(linkContentNode.getContent(), RenderContext.copy$default(renderContext, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, null, null, true, null, null, 0.0f, null, false, -536870913, 7, null), draweeSpanStringBuilder5);
                                    if (z8) {
                                        draweeSpanStringBuilder5.append(' ');
                                    }
                                    int i24 = 0;
                                    while (i24 < 3) {
                                        Object obj6 = objArr4[i24];
                                        if (obj6 != null) {
                                            i14 = i23;
                                            draweeSpanStringBuilder5.setSpan(obj6, i14, draweeSpanStringBuilder5.length(), 9830433);
                                        } else {
                                            i14 = i23;
                                        }
                                        i24++;
                                        i23 = i14;
                                    }
                                    renderContext3 = renderContext;
                                } else if (contentNode2 instanceof MentionContentNode) {
                                    draweeSpanStringBuilder5.append(FIRST_STRONG_ISOLATE);
                                    DiscordFontSpan discordFontSpan3 = new DiscordFontSpan(renderContext.getContext(), DiscordFont.PrimarySemibold);
                                    final MentionContentNode mentionContentNode = (MentionContentNode) contentNode2;
                                    if (mentionContentNode instanceof UserOrRoleMentionContentNode) {
                                        renderContext2 = renderContext;
                                        ClickableSpan clickableSpan3 = new ClickableSpan(null, num, null, null, 0.0f, null, null, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                            @Override // kotlin.jvm.functions.Function1
                                            public final Object invoke(Object obj7) {
                                                boolean spannable$lambda$72$lambda$39;
                                                Unit spannable$lambda$72$lambda$40;
                                                Unit spannable$lambda$72$lambda$43;
                                                Unit spannable$lambda$72$lambda$28;
                                                boolean spannable$lambda$72$lambda$30;
                                                Unit spannable$lambda$72$lambda$31;
                                                boolean spannable$lambda$72$lambda$34;
                                                Unit spannable$lambda$72$lambda$35;
                                                Unit spannable$lambda$72$lambda$37;
                                                switch (i20) {
                                                    case 0:
                                                        spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext, mentionContentNode, (View) obj7);
                                                        return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                    case 1:
                                                        spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$40;
                                                    case 2:
                                                        spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$43;
                                                    case 3:
                                                        spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$28;
                                                    case 4:
                                                        spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext, mentionContentNode, (View) obj7);
                                                        return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                    case 5:
                                                        spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$31;
                                                    case 6:
                                                        spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext, mentionContentNode, (View) obj7);
                                                        return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                    case 7:
                                                        spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$35;
                                                    default:
                                                        spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext, mentionContentNode, (View) obj7);
                                                        return spannable$lambda$72$lambda$37;
                                                }
                                            }
                                        }, 253, null);
                                        UserOrRoleMentionContentNode userOrRoleMentionContentNode = (UserOrRoleMentionContentNode) contentNode2;
                                        int roleColor = userOrRoleMentionContentNode.getRoleColor();
                                        RoleColors androidColors2 = RoleColorsKt.toAndroidColors(userOrRoleMentionContentNode.getRoleColors());
                                        boolean z11 = renderContext2.getShouldShowRoleDot() && roleColor > 0;
                                        boolean z12 = renderContext2.getShouldShowRoleOnName() && roleColor > 0;
                                        UserId m431getUserIdwUX8bhU = userOrRoleMentionContentNode.m431getUserIdwUX8bhU();
                                        boolean m1245equalsimpl0 = m431getUserIdwUX8bhU == null ? false : UserId.m1245equalsimpl0(m431getUserIdwUX8bhU.m1250unboximpl(), UserId.m1242constructorimpl(ConstantsKt.CLYDE_AI_USER_ID));
                                        if (m1245equalsimpl0) {
                                            i12 = e10;
                                        } else if (z12) {
                                            i12 = b1.c.e(androidColors2 != null ? androidColors2.getPrimaryColor() : roleColor, 25);
                                        } else {
                                            i12 = themeColor;
                                        }
                                        BackgroundSpan makeMentionBackgroundSpan = makeMentionBackgroundSpan(renderContext2, i12);
                                        if (z12 && !m1245equalsimpl0) {
                                            if ((androidColors2 != null ? androidColors2.getSecondaryColor() : null) != null) {
                                                ArrayList i25 = c0.i(Integer.valueOf(androidColors2.getPrimaryColor()), androidColors2.getSecondaryColor());
                                                if (androidColors2.getTertiaryColor() != null) {
                                                    i25.add(androidColors2.getTertiaryColor());
                                                }
                                                foregroundColorSpan = new EnhancedRoleColorsSpan(CollectionsKt.h0(i25));
                                                Object[] objArr5 = {discordFontSpan3, clickableSpan3, makeMentionBackgroundSpan, foregroundColorSpan};
                                                int length6 = draweeSpanStringBuilder.length();
                                                maybeAddRoleDot(draweeSpanStringBuilder, z11, renderContext2.getSingleLine(), context, i12, roleColor, androidColors2);
                                                draweeSpanStringBuilder3 = draweeSpanStringBuilder;
                                                draweeSpanStringBuilder3.append((CharSequence) toSpannable$default(userOrRoleMentionContentNode.getContent(), renderContext2, null, false, 6, null));
                                                for (i13 = 0; i13 < 4; i13++) {
                                                    Object obj7 = objArr5[i13];
                                                    if (obj7 != null) {
                                                        draweeSpanStringBuilder3.setSpan(obj7, length6, draweeSpanStringBuilder3.length(), 33);
                                                    }
                                                }
                                            }
                                        }
                                        if (m1245equalsimpl0) {
                                            e9 = themeColor3;
                                        } else {
                                            e9 = z12 ? b1.c.e(roleColor, 255) : themeColor2;
                                        }
                                        foregroundColorSpan = new ForegroundColorSpan(e9);
                                        Object[] objArr52 = {discordFontSpan3, clickableSpan3, makeMentionBackgroundSpan, foregroundColorSpan};
                                        int length62 = draweeSpanStringBuilder.length();
                                        maybeAddRoleDot(draweeSpanStringBuilder, z11, renderContext2.getSingleLine(), context, i12, roleColor, androidColors2);
                                        draweeSpanStringBuilder3 = draweeSpanStringBuilder;
                                        draweeSpanStringBuilder3.append((CharSequence) toSpannable$default(userOrRoleMentionContentNode.getContent(), renderContext2, null, false, 6, null));
                                        while (i13 < 4) {
                                        }
                                    } else {
                                        draweeSpanStringBuilder3 = draweeSpanStringBuilder5;
                                        renderContext2 = renderContext;
                                        if (mentionContentNode instanceof ChannelMentionContentNode) {
                                            final int i26 = 4;
                                            Function1 function1 = new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                @Override // kotlin.jvm.functions.Function1
                                                public final Object invoke(Object obj72) {
                                                    boolean spannable$lambda$72$lambda$39;
                                                    Unit spannable$lambda$72$lambda$40;
                                                    Unit spannable$lambda$72$lambda$43;
                                                    Unit spannable$lambda$72$lambda$28;
                                                    boolean spannable$lambda$72$lambda$30;
                                                    Unit spannable$lambda$72$lambda$31;
                                                    boolean spannable$lambda$72$lambda$34;
                                                    Unit spannable$lambda$72$lambda$35;
                                                    Unit spannable$lambda$72$lambda$37;
                                                    switch (i26) {
                                                        case 0:
                                                            spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                        case 1:
                                                            spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$40;
                                                        case 2:
                                                            spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$43;
                                                        case 3:
                                                            spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$28;
                                                        case 4:
                                                            spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                        case 5:
                                                            spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$31;
                                                        case 6:
                                                            spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                        case 7:
                                                            spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$35;
                                                        default:
                                                            spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$37;
                                                    }
                                                }
                                            };
                                            final int i27 = 5;
                                            ClickableSpan clickableSpan4 = new ClickableSpan(null, num, null, null, 0.0f, null, function1, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                @Override // kotlin.jvm.functions.Function1
                                                public final Object invoke(Object obj72) {
                                                    boolean spannable$lambda$72$lambda$39;
                                                    Unit spannable$lambda$72$lambda$40;
                                                    Unit spannable$lambda$72$lambda$43;
                                                    Unit spannable$lambda$72$lambda$28;
                                                    boolean spannable$lambda$72$lambda$30;
                                                    Unit spannable$lambda$72$lambda$31;
                                                    boolean spannable$lambda$72$lambda$34;
                                                    Unit spannable$lambda$72$lambda$35;
                                                    Unit spannable$lambda$72$lambda$37;
                                                    switch (i27) {
                                                        case 0:
                                                            spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                        case 1:
                                                            spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$40;
                                                        case 2:
                                                            spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$43;
                                                        case 3:
                                                            spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$28;
                                                        case 4:
                                                            spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                        case 5:
                                                            spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$31;
                                                        case 6:
                                                            spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                        case 7:
                                                            spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$35;
                                                        default:
                                                            spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$37;
                                                    }
                                                }
                                            }, 189, null);
                                            BackgroundSpan makeMentionBackgroundSpan2 = makeMentionBackgroundSpan(renderContext2, themeColor);
                                            ForegroundColorSpan foregroundColorSpan3 = new ForegroundColorSpan(themeColor2);
                                            Object[] objArr6 = {discordFontSpan3, clickableSpan4, makeMentionBackgroundSpan2, foregroundColorSpan3};
                                            int length7 = draweeSpanStringBuilder3.length();
                                            ChannelMentionContentNode channelMentionContentNode = (ChannelMentionContentNode) contentNode2;
                                            List<ContentNode> inContent = channelMentionContentNode.getInContent();
                                            if (inContent != null) {
                                                appendToExistingBuilder(inContent, renderContext2, draweeSpanStringBuilder3);
                                                int iconSize2 = getIconSize("_caret", renderContext2.getBaselineHeightPx());
                                                appendImage$default(draweeSpanStringBuilder3, context, renderContext2, ReactAssetExtensionsKt.getUri(ReactAsset.ChevronSmallRightIcon, context), iconSize2, iconSize2, Integer.valueOf(foregroundColorSpan3.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                                Unit unit5 = Unit.a;
                                            }
                                            List<ContentNode> content = channelMentionContentNode.getContent();
                                            if (content != null) {
                                                appendToExistingBuilder(content, renderContext2, draweeSpanStringBuilder3);
                                                Unit unit6 = Unit.a;
                                            }
                                            for (int i28 = 0; i28 < 4; i28++) {
                                                Object obj8 = objArr6[i28];
                                                if (obj8 != null) {
                                                    draweeSpanStringBuilder3.setSpan(obj8, length7, draweeSpanStringBuilder3.length(), 33);
                                                }
                                            }
                                        } else if (mentionContentNode instanceof AttachmentLinkContentNode) {
                                            final int i29 = 6;
                                            Function1 function12 = new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                @Override // kotlin.jvm.functions.Function1
                                                public final Object invoke(Object obj72) {
                                                    boolean spannable$lambda$72$lambda$39;
                                                    Unit spannable$lambda$72$lambda$40;
                                                    Unit spannable$lambda$72$lambda$43;
                                                    Unit spannable$lambda$72$lambda$28;
                                                    boolean spannable$lambda$72$lambda$30;
                                                    Unit spannable$lambda$72$lambda$31;
                                                    boolean spannable$lambda$72$lambda$34;
                                                    Unit spannable$lambda$72$lambda$35;
                                                    Unit spannable$lambda$72$lambda$37;
                                                    switch (i29) {
                                                        case 0:
                                                            spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                        case 1:
                                                            spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$40;
                                                        case 2:
                                                            spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$43;
                                                        case 3:
                                                            spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$28;
                                                        case 4:
                                                            spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                        case 5:
                                                            spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$31;
                                                        case 6:
                                                            spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                        case 7:
                                                            spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$35;
                                                        default:
                                                            spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$37;
                                                    }
                                                }
                                            };
                                            final int i30 = 7;
                                            ClickableSpan clickableSpan5 = new ClickableSpan(null, num, null, null, 0.0f, null, function12, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                @Override // kotlin.jvm.functions.Function1
                                                public final Object invoke(Object obj72) {
                                                    boolean spannable$lambda$72$lambda$39;
                                                    Unit spannable$lambda$72$lambda$40;
                                                    Unit spannable$lambda$72$lambda$43;
                                                    Unit spannable$lambda$72$lambda$28;
                                                    boolean spannable$lambda$72$lambda$30;
                                                    Unit spannable$lambda$72$lambda$31;
                                                    boolean spannable$lambda$72$lambda$34;
                                                    Unit spannable$lambda$72$lambda$35;
                                                    Unit spannable$lambda$72$lambda$37;
                                                    switch (i30) {
                                                        case 0:
                                                            spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                        case 1:
                                                            spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$40;
                                                        case 2:
                                                            spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$43;
                                                        case 3:
                                                            spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$28;
                                                        case 4:
                                                            spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                        case 5:
                                                            spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$31;
                                                        case 6:
                                                            spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                        case 7:
                                                            spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$35;
                                                        default:
                                                            spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$37;
                                                    }
                                                }
                                            }, 189, null);
                                            BackgroundSpan makeMentionBackgroundSpan3 = makeMentionBackgroundSpan(renderContext2, themeColor);
                                            ForegroundColorSpan foregroundColorSpan4 = new ForegroundColorSpan(themeColor2);
                                            Object[] objArr7 = {discordFontSpan3, clickableSpan5, makeMentionBackgroundSpan3, foregroundColorSpan4};
                                            int length8 = draweeSpanStringBuilder.length();
                                            int iconSize3 = getIconSize(null, renderContext2.getBaselineHeightPx());
                                            appendImage$default(draweeSpanStringBuilder, context, renderContext2, ReactAssetExtensionsKt.getUri(ReactAsset.AttachmentIcon, context), iconSize3, iconSize3, Integer.valueOf(foregroundColorSpan4.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                            draweeSpanStringBuilder.append(' ');
                                            List<ContentNode> content2 = ((AttachmentLinkContentNode) contentNode2).getContent();
                                            if (content2 != null) {
                                                appendToExistingBuilder(content2, renderContext2, draweeSpanStringBuilder);
                                                Unit unit7 = Unit.a;
                                            }
                                            for (int i31 = 0; i31 < 4; i31++) {
                                                Object obj9 = objArr7[i31];
                                                if (obj9 != null) {
                                                    draweeSpanStringBuilder.setSpan(obj9, length8, draweeSpanStringBuilder.length(), 33);
                                                }
                                            }
                                            draweeSpanStringBuilder5 = draweeSpanStringBuilder;
                                            renderContext3 = renderContext2;
                                            z6 = false;
                                            ForceExhaustiveKt.forceExhaustive(draweeSpanStringBuilder5);
                                            draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                        } else if (mentionContentNode instanceof StaticChannelMentionContentNode) {
                                            final int i32 = 8;
                                            ClickableSpan clickableSpan6 = new ClickableSpan(null, num, null, null, 0.0f, null, null, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                @Override // kotlin.jvm.functions.Function1
                                                public final Object invoke(Object obj72) {
                                                    boolean spannable$lambda$72$lambda$39;
                                                    Unit spannable$lambda$72$lambda$40;
                                                    Unit spannable$lambda$72$lambda$43;
                                                    Unit spannable$lambda$72$lambda$28;
                                                    boolean spannable$lambda$72$lambda$30;
                                                    Unit spannable$lambda$72$lambda$31;
                                                    boolean spannable$lambda$72$lambda$34;
                                                    Unit spannable$lambda$72$lambda$35;
                                                    Unit spannable$lambda$72$lambda$37;
                                                    switch (i32) {
                                                        case 0:
                                                            spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                        case 1:
                                                            spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$40;
                                                        case 2:
                                                            spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$43;
                                                        case 3:
                                                            spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$28;
                                                        case 4:
                                                            spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                        case 5:
                                                            spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$31;
                                                        case 6:
                                                            spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                            return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                        case 7:
                                                            spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$35;
                                                        default:
                                                            spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                            return spannable$lambda$72$lambda$37;
                                                    }
                                                }
                                            }, 253, null);
                                            BackgroundSpan makeMentionBackgroundSpan4 = makeMentionBackgroundSpan(renderContext2, themeColor);
                                            ForegroundColorSpan foregroundColorSpan5 = new ForegroundColorSpan(themeColor2);
                                            int iconSize4 = getIconSize(null, renderContext2.getBaselineHeightPx());
                                            Object[] objArr8 = {discordFontSpan3, clickableSpan6, makeMentionBackgroundSpan4, foregroundColorSpan5};
                                            int length9 = draweeSpanStringBuilder.length();
                                            StaticChannelMentionContentNode staticChannelMentionContentNode = (StaticChannelMentionContentNode) contentNode2;
                                            int i33 = WhenMappings.$EnumSwitchMapping$0[staticChannelMentionContentNode.getId().ordinal()];
                                            if (i33 == 1 || i33 == 2) {
                                                appendImage$default(draweeSpanStringBuilder, context, renderContext, ReactAssetExtensionsKt.getUri(ReactAsset.SignPostIcon, context), iconSize4, iconSize4, Integer.valueOf(foregroundColorSpan5.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                                draweeSpanStringBuilder4 = draweeSpanStringBuilder;
                                                Unit unit8 = Unit.a;
                                            } else {
                                                if (i33 == 3) {
                                                    appendImage$default(draweeSpanStringBuilder, context, renderContext, ReactAssetExtensionsKt.getUri(ReactAsset.ChannelListMagnifyingGlassIcon, context), iconSize4, iconSize4, Integer.valueOf(foregroundColorSpan5.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                                    Unit unit9 = Unit.a;
                                                } else if (i33 == 4) {
                                                    appendImage$default(draweeSpanStringBuilder, context, renderContext, ReactAssetExtensionsKt.getUri(ReactAsset.ChannelListMagnifyingGlassIcon, context), iconSize4, iconSize4, Integer.valueOf(foregroundColorSpan5.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                                    Unit unit10 = Unit.a;
                                                } else if (i33 != 5) {
                                                    draweeSpanStringBuilder.append(CHANNEL_PREFIX);
                                                    draweeSpanStringBuilder4 = draweeSpanStringBuilder;
                                                } else {
                                                    appendImage$default(draweeSpanStringBuilder, context, renderContext2, ReactAssetExtensionsKt.getUri(ReactAsset.LinkIcon, context), iconSize4, iconSize4, Integer.valueOf(foregroundColorSpan5.getForegroundColor()), 0.0f, 0.0f, JfifUtil.MARKER_SOFn, null);
                                                    Unit unit11 = Unit.a;
                                                }
                                                draweeSpanStringBuilder4 = draweeSpanStringBuilder;
                                            }
                                            draweeSpanStringBuilder4.append((CharSequence) toSpannable$default(staticChannelMentionContentNode.getContent(), renderContext, null, false, 6, null));
                                            for (int i34 = 0; i34 < 4; i34++) {
                                                Object obj10 = objArr8[i34];
                                                if (obj10 != null) {
                                                    draweeSpanStringBuilder4.setSpan(obj10, length9, draweeSpanStringBuilder4.length(), 33);
                                                }
                                            }
                                            renderContext3 = renderContext;
                                            draweeSpanStringBuilder5 = draweeSpanStringBuilder4;
                                            z6 = false;
                                            ForceExhaustiveKt.forceExhaustive(draweeSpanStringBuilder5);
                                            draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                        } else {
                                            if (mentionContentNode instanceof CommandMentionContentNode) {
                                                BackgroundSpan makeMentionBackgroundSpan5 = makeMentionBackgroundSpan(renderContext2, themeColor);
                                                ForegroundColorSpan foregroundColorSpan6 = new ForegroundColorSpan(themeColor2);
                                                final int i35 = 0;
                                                final int i36 = 1;
                                                ClickableSpan clickableSpan7 = new ClickableSpan(null, num, null, null, 0.0f, null, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                    @Override // kotlin.jvm.functions.Function1
                                                    public final Object invoke(Object obj72) {
                                                        boolean spannable$lambda$72$lambda$39;
                                                        Unit spannable$lambda$72$lambda$40;
                                                        Unit spannable$lambda$72$lambda$43;
                                                        Unit spannable$lambda$72$lambda$28;
                                                        boolean spannable$lambda$72$lambda$30;
                                                        Unit spannable$lambda$72$lambda$31;
                                                        boolean spannable$lambda$72$lambda$34;
                                                        Unit spannable$lambda$72$lambda$35;
                                                        Unit spannable$lambda$72$lambda$37;
                                                        switch (i35) {
                                                            case 0:
                                                                spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                            case 1:
                                                                spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$40;
                                                            case 2:
                                                                spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$43;
                                                            case 3:
                                                                spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$28;
                                                            case 4:
                                                                spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                            case 5:
                                                                spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$31;
                                                            case 6:
                                                                spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                            case 7:
                                                                spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$35;
                                                            default:
                                                                spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$37;
                                                        }
                                                    }
                                                }, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                    @Override // kotlin.jvm.functions.Function1
                                                    public final Object invoke(Object obj72) {
                                                        boolean spannable$lambda$72$lambda$39;
                                                        Unit spannable$lambda$72$lambda$40;
                                                        Unit spannable$lambda$72$lambda$43;
                                                        Unit spannable$lambda$72$lambda$28;
                                                        boolean spannable$lambda$72$lambda$30;
                                                        Unit spannable$lambda$72$lambda$31;
                                                        boolean spannable$lambda$72$lambda$34;
                                                        Unit spannable$lambda$72$lambda$35;
                                                        Unit spannable$lambda$72$lambda$37;
                                                        switch (i36) {
                                                            case 0:
                                                                spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                            case 1:
                                                                spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$40;
                                                            case 2:
                                                                spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$43;
                                                            case 3:
                                                                spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$28;
                                                            case 4:
                                                                spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                            case 5:
                                                                spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$31;
                                                            case 6:
                                                                spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                                return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                            case 7:
                                                                spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$35;
                                                            default:
                                                                spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                                return spannable$lambda$72$lambda$37;
                                                        }
                                                    }
                                                }, 189, null);
                                                Object[] objArr9 = {new GGSansBoldSpan(renderContext.getContext())};
                                                int length10 = draweeSpanStringBuilder3.length();
                                                Object[] objArr10 = {clickableSpan7, makeMentionBackgroundSpan5, foregroundColorSpan6};
                                                int length11 = draweeSpanStringBuilder3.length();
                                                draweeSpanStringBuilder3.append(COMMAND_PREFIX);
                                                renderContext3 = renderContext;
                                                draweeSpanStringBuilder3.append((CharSequence) toSpannable$default(((CommandMentionContentNode) contentNode2).getContent(), renderContext, null, false, 6, null));
                                                for (int i37 = 0; i37 < 3; i37++) {
                                                    Object obj11 = objArr10[i37];
                                                    if (obj11 != null) {
                                                        draweeSpanStringBuilder3.setSpan(obj11, length11, draweeSpanStringBuilder3.length(), 33);
                                                    }
                                                }
                                                Object obj12 = objArr9[0];
                                                if (obj12 != null) {
                                                    draweeSpanStringBuilder3.setSpan(obj12, length10, draweeSpanStringBuilder3.length(), 33);
                                                }
                                                draweeSpanStringBuilder5 = draweeSpanStringBuilder3;
                                                z6 = false;
                                            } else {
                                                z6 = false;
                                                if (mentionContentNode instanceof GameMentionContentNode) {
                                                    final int i38 = 2;
                                                    Object[] objArr11 = {discordFontSpan3, new ClickableSpan(null, num, null, null, 0.0f, null, null, false, new Function1() { // from class: com.discord.chat.presentation.textutils.d
                                                        @Override // kotlin.jvm.functions.Function1
                                                        public final Object invoke(Object obj72) {
                                                            boolean spannable$lambda$72$lambda$39;
                                                            Unit spannable$lambda$72$lambda$40;
                                                            Unit spannable$lambda$72$lambda$43;
                                                            Unit spannable$lambda$72$lambda$28;
                                                            boolean spannable$lambda$72$lambda$30;
                                                            Unit spannable$lambda$72$lambda$31;
                                                            boolean spannable$lambda$72$lambda$34;
                                                            Unit spannable$lambda$72$lambda$35;
                                                            Unit spannable$lambda$72$lambda$37;
                                                            switch (i38) {
                                                                case 0:
                                                                    spannable$lambda$72$lambda$39 = TextUtilsKt.toSpannable$lambda$72$lambda$39(renderContext2, mentionContentNode, (View) obj72);
                                                                    return Boolean.valueOf(spannable$lambda$72$lambda$39);
                                                                case 1:
                                                                    spannable$lambda$72$lambda$40 = TextUtilsKt.toSpannable$lambda$72$lambda$40(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$40;
                                                                case 2:
                                                                    spannable$lambda$72$lambda$43 = TextUtilsKt.toSpannable$lambda$72$lambda$43(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$43;
                                                                case 3:
                                                                    spannable$lambda$72$lambda$28 = TextUtilsKt.toSpannable$lambda$72$lambda$28(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$28;
                                                                case 4:
                                                                    spannable$lambda$72$lambda$30 = TextUtilsKt.toSpannable$lambda$72$lambda$30(renderContext2, mentionContentNode, (View) obj72);
                                                                    return Boolean.valueOf(spannable$lambda$72$lambda$30);
                                                                case 5:
                                                                    spannable$lambda$72$lambda$31 = TextUtilsKt.toSpannable$lambda$72$lambda$31(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$31;
                                                                case 6:
                                                                    spannable$lambda$72$lambda$34 = TextUtilsKt.toSpannable$lambda$72$lambda$34(renderContext2, mentionContentNode, (View) obj72);
                                                                    return Boolean.valueOf(spannable$lambda$72$lambda$34);
                                                                case 7:
                                                                    spannable$lambda$72$lambda$35 = TextUtilsKt.toSpannable$lambda$72$lambda$35(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$35;
                                                                default:
                                                                    spannable$lambda$72$lambda$37 = TextUtilsKt.toSpannable$lambda$72$lambda$37(renderContext2, mentionContentNode, (View) obj72);
                                                                    return spannable$lambda$72$lambda$37;
                                                            }
                                                        }
                                                    }, 253, null), makeMentionBackgroundSpan(renderContext2, themeColor), new ForegroundColorSpan(themeColor2)};
                                                    int length12 = draweeSpanStringBuilder3.length();
                                                    int iconSize5 = getIconSize(null, renderContext.getBaselineHeightPx());
                                                    GameMentionContentNode gameMentionContentNode = (GameMentionContentNode) contentNode2;
                                                    if (gameMentionContentNode.getIcon() != null) {
                                                        draweeSpanStringBuilder3.append(' ');
                                                        renderContext3 = renderContext;
                                                        draweeSpanStringBuilder5 = draweeSpanStringBuilder3;
                                                        appendImage$default(draweeSpanStringBuilder5, context, renderContext3, gameMentionContentNode.getIcon(), iconSize5, iconSize5, null, getGameMentionIconCornerRadius(iconSize5), 0.0f, 160, null);
                                                        draweeSpanStringBuilder5.append(' ');
                                                    } else {
                                                        renderContext3 = renderContext;
                                                        draweeSpanStringBuilder5 = draweeSpanStringBuilder3;
                                                    }
                                                    String displayName = gameMentionContentNode.getDisplayName();
                                                    if (displayName == null) {
                                                        displayName = "";
                                                    }
                                                    draweeSpanStringBuilder5.append((CharSequence) displayName);
                                                    for (int i39 = 0; i39 < 4; i39++) {
                                                        Object obj13 = objArr11[i39];
                                                        if (obj13 != null) {
                                                            draweeSpanStringBuilder5.setSpan(obj13, length12, draweeSpanStringBuilder5.length(), 33);
                                                        }
                                                    }
                                                } else {
                                                    throw new n();
                                                }
                                            }
                                            ForceExhaustiveKt.forceExhaustive(draweeSpanStringBuilder5);
                                            draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                        }
                                    }
                                    draweeSpanStringBuilder5 = draweeSpanStringBuilder3;
                                    renderContext3 = renderContext2;
                                    z6 = false;
                                    ForceExhaustiveKt.forceExhaustive(draweeSpanStringBuilder5);
                                    draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                } else {
                                    int i40 = i15;
                                    renderContext3 = renderContext;
                                    z6 = false;
                                    if (contentNode2 instanceof ParagraphContentNode) {
                                        appendToExistingBuilder(((ParagraphContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                                        if (!z10) {
                                            draweeSpanStringBuilder5.append("\n\n");
                                        }
                                        Unit unit12 = Unit.a;
                                    } else {
                                        if (contentNode2 instanceof SpoilerContentNode) {
                                            SpoilerContentNode spoilerContentNode = (SpoilerContentNode) contentNode2;
                                            String m461forNode2sfwrmE = SpoilerIdentifier.INSTANCE.m461forNode2sfwrmE(spoilerContentNode, renderContext3.getContainerId(), i40);
                                            boolean z13 = renderContext3.getShouldForceRevealSpoilers() || SpoilerManager.INSTANCE.m463isRevealedV2PEE7g(m461forNode2sfwrmE);
                                            RenderContext.SpoilerState spoilerState = z13 ? RenderContext.SpoilerState.Revealed : RenderContext.SpoilerState.Hidden;
                                            bs.c0 c0Var = !z13 ? new bs.c0(m461forNode2sfwrmE, renderContext3, r8) : null;
                                            ClickableSpan clickableSpan8 = c0Var != null ? new ClickableSpan(NestedClickableSpan.TouchPriority.HIGH, null, null, null, 0.0f, null, null, true, new e1(12, c0Var), 126, null) : null;
                                            if (z13) {
                                                spoilerHiddenBackground = renderContext3.getTheme().getSpoilerRevealedBackground();
                                            } else {
                                                spoilerHiddenBackground = renderContext3.getTheme().getSpoilerHiddenBackground();
                                            }
                                            Object[] objArr12 = {clickableSpan8, new BackgroundSpan(new BackgroundStyle(spoilerHiddenBackground, 0, 0, 6, (DefaultConstructorMarker) null), null, null, 6, null), new SpoilerSpan(z13, c0Var)};
                                            int length13 = draweeSpanStringBuilder5.length();
                                            appendToExistingBuilder(spoilerContentNode.getContent(), RenderContext.copy$default(renderContext, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, spoilerState, 0, null, null, false, null, null, 0.0f, null, false, -33554433, 7, null), draweeSpanStringBuilder5);
                                            int i41 = 0;
                                            while (i41 < 3) {
                                                Object obj14 = objArr12[i41];
                                                if (obj14 != null) {
                                                    i11 = length13;
                                                    draweeSpanStringBuilder5.setSpan(obj14, i11, draweeSpanStringBuilder5.length(), 33);
                                                } else {
                                                    i11 = length13;
                                                }
                                                i41++;
                                                length13 = i11;
                                            }
                                            renderContext3 = renderContext;
                                        } else {
                                            if (contentNode2 instanceof StrikethroughContentNode) {
                                                Object[] objArr13 = {new StrikethroughSpan()};
                                                int length14 = draweeSpanStringBuilder5.length();
                                                appendToExistingBuilder(((StrikethroughContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                                                z7 = false;
                                                Object obj15 = objArr13[0];
                                                if (obj15 != null) {
                                                    draweeSpanStringBuilder5.setSpan(obj15, length14, draweeSpanStringBuilder5.length(), 33);
                                                }
                                            } else {
                                                z7 = false;
                                                if (contentNode2 instanceof SubtextContentNode) {
                                                    if (renderContext3.getSingleLine()) {
                                                        appendToExistingBuilder(((SubtextContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                                                        if (!z10) {
                                                            simulateInlineNewline(draweeSpanStringBuilder5);
                                                        }
                                                    } else {
                                                        changeTextSizeSp(draweeSpanStringBuilder5, FontManager.INSTANCE.getIsClassicChatFontScaleEnabled(context) ? 13 : 14, renderContext3, new j(draweeSpanStringBuilder5, new ForegroundColorSpan(renderContext3.getTheme().getTextMuted()), (SubtextContentNode) contentNode2, 1));
                                                        if (!z10) {
                                                            SpannableStringBuilderExtensionsKt.ensureNewline$default(draweeSpanStringBuilder5, null, 1, null);
                                                        } else {
                                                            ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, 0);
                                                        }
                                                    }
                                                    Unit unit13 = Unit.a;
                                                } else {
                                                    int i42 = 16;
                                                    if (contentNode2 instanceof HeadingContentNode) {
                                                        if (renderContext3.getSingleLine()) {
                                                            Object[] objArr14 = {new GGSansBoldSpan(renderContext3.getContext())};
                                                            int length15 = draweeSpanStringBuilder5.length();
                                                            appendToExistingBuilder(((HeadingContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                                                            simulateInlineNewline(draweeSpanStringBuilder5);
                                                            Object obj16 = objArr14[0];
                                                            if (obj16 != null) {
                                                                draweeSpanStringBuilder5.setSpan(obj16, length15, draweeSpanStringBuilder5.length(), 33);
                                                            }
                                                        } else {
                                                            HeadingContentNode headingContentNode = (HeadingContentNode) contentNode2;
                                                            int level = headingContentNode.getLevel();
                                                            if (level == 1) {
                                                                i42 = 24;
                                                            } else if (level == 2) {
                                                                i42 = 20;
                                                            }
                                                            if (draweeSpanStringBuilder5.length() > 0) {
                                                                ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, SizeUtilsKt.getDpToPx(8));
                                                            } else if (!renderContext3.getShouldOmitTopAndBottomHeadingSpacerNewLine()) {
                                                                ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, SizeUtilsKt.getDpToPx(4));
                                                            }
                                                            Object[] objArr15 = {new GGSansBoldSpan(renderContext3.getContext())};
                                                            int length16 = draweeSpanStringBuilder5.length();
                                                            changeTextSizeSp(draweeSpanStringBuilder5, i42, renderContext3, new i(2, headingContentNode, draweeSpanStringBuilder5));
                                                            Object obj17 = objArr15[0];
                                                            if (obj17 != null) {
                                                                draweeSpanStringBuilder5.setSpan(obj17, length16, draweeSpanStringBuilder5.length(), 33);
                                                            }
                                                            if (!z10 || !renderContext3.getShouldOmitTopAndBottomHeadingSpacerNewLine()) {
                                                                ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder5, SizeUtilsKt.getDpToPx(4));
                                                            }
                                                            Unit unit14 = Unit.a;
                                                        }
                                                    } else if (contentNode2 instanceof LHeadingContentNode) {
                                                        DiscordFontSpan discordFontSpan4 = new DiscordFontSpan(renderContext3.getContext(), DiscordFont.PrimaryExtraBold);
                                                        if (renderContext3.getSingleLine()) {
                                                            Object[] objArr16 = {discordFontSpan4};
                                                            int length17 = draweeSpanStringBuilder5.length();
                                                            appendToExistingBuilder(((LHeadingContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder5);
                                                            simulateInlineNewline(draweeSpanStringBuilder5);
                                                            Object obj18 = objArr16[0];
                                                            if (obj18 != null) {
                                                                draweeSpanStringBuilder5.setSpan(obj18, length17, draweeSpanStringBuilder5.length(), 33);
                                                            }
                                                        } else {
                                                            int scaledSpToPx = FontManager.INSTANCE.getScaledSpToPx(16, renderContext3.getContext());
                                                            float baselineHeightForFontSizePx = getBaselineHeightForFontSizePx(renderContext3.getPaint(), scaledSpToPx);
                                                            AbsoluteSizeSpan absoluteSizeSpan = new AbsoluteSizeSpan(scaledSpToPx);
                                                            LHeadingContentNode lHeadingContentNode = (LHeadingContentNode) contentNode2;
                                                            o6 = kotlin.text.x.o(lHeadingContentNode.getClassName(), "added", false);
                                                            if (!o6) {
                                                                o7 = kotlin.text.x.o(lHeadingContentNode.getClassName(), "fixed", false);
                                                                if (!o7) {
                                                                    o10 = kotlin.text.x.o(lHeadingContentNode.getClassName(), ReactProgressBarViewManager.PROP_PROGRESS, false);
                                                                    if (!o10) {
                                                                        o11 = kotlin.text.x.o(lHeadingContentNode.getClassName(), "improved", false);
                                                                        if (o11) {
                                                                            mobileTextHeadingPrimary = renderContext3.getTheme().getTextBrand();
                                                                        } else {
                                                                            mobileTextHeadingPrimary = renderContext3.getTheme().getMobileTextHeadingPrimary();
                                                                        }
                                                                    } else {
                                                                        mobileTextHeadingPrimary = renderContext3.getTheme().getTextFeedbackWarning();
                                                                    }
                                                                } else {
                                                                    mobileTextHeadingPrimary = renderContext3.getTheme().getTextFeedbackCritical();
                                                                }
                                                            } else {
                                                                mobileTextHeadingPrimary = renderContext3.getTheme().getTextFeedbackPositive();
                                                            }
                                                            ForegroundColorSpan foregroundColorSpan7 = new ForegroundColorSpan(mobileTextHeadingPrimary);
                                                            if (draweeSpanStringBuilder5.length() > 0) {
                                                                dpToPx = SizeUtilsKt.getDpToPx(8);
                                                                i5 = 4;
                                                            } else {
                                                                i5 = 4;
                                                                dpToPx = SizeUtilsKt.getDpToPx(4);
                                                            }
                                                            Object[] objArr17 = {discordFontSpan4, foregroundColorSpan7, new UnderlineSpan()};
                                                            int length18 = draweeSpanStringBuilder5.length();
                                                            Object[] objArr18 = {new AbsoluteSizeSpan(dpToPx)};
                                                            int length19 = draweeSpanStringBuilder5.length();
                                                            draweeSpanStringBuilder5.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                                                            Object obj19 = objArr18[0];
                                                            if (obj19 != null) {
                                                                draweeSpanStringBuilder5.setSpan(obj19, length19, draweeSpanStringBuilder5.length(), 33);
                                                            }
                                                            int length20 = draweeSpanStringBuilder5.length();
                                                            int i43 = i5;
                                                            int i44 = length18;
                                                            appendToExistingBuilder(lHeadingContentNode.getContent(), RenderContext.copy$default(renderContext, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, null, null, false, null, null, baselineHeightForFontSizePx, null, false, -1, 4, null), draweeSpanStringBuilder5);
                                                            Object obj20 = new Object[]{absoluteSizeSpan}[0];
                                                            if (obj20 != null) {
                                                                i6 = 33;
                                                                draweeSpanStringBuilder5.setSpan(obj20, length20, draweeSpanStringBuilder5.length(), 33);
                                                            } else {
                                                                i6 = 33;
                                                            }
                                                            if (!z10) {
                                                                Object[] objArr19 = {new AbsoluteSizeSpan(SizeUtilsKt.getDpToPx(i43))};
                                                                int length21 = draweeSpanStringBuilder5.length();
                                                                draweeSpanStringBuilder5.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                                                                Object obj21 = objArr19[0];
                                                                if (obj21 != null) {
                                                                    draweeSpanStringBuilder5.setSpan(obj21, length21, draweeSpanStringBuilder5.length(), i6);
                                                                }
                                                            } else {
                                                                Object[] objArr20 = {new AbsoluteSizeSpan(0)};
                                                                int length22 = draweeSpanStringBuilder5.length();
                                                                draweeSpanStringBuilder5.append("\n\u200b");
                                                                Object obj22 = objArr20[0];
                                                                if (obj22 != null) {
                                                                    draweeSpanStringBuilder5.setSpan(obj22, length22, draweeSpanStringBuilder5.length(), i6);
                                                                }
                                                            }
                                                            int i45 = 0;
                                                            while (i45 < 3) {
                                                                Object obj23 = objArr17[i45];
                                                                if (obj23 != null) {
                                                                    i10 = i44;
                                                                    draweeSpanStringBuilder5.setSpan(obj23, i10, draweeSpanStringBuilder5.length(), i6);
                                                                } else {
                                                                    i10 = i44;
                                                                }
                                                                i45++;
                                                                i44 = i10;
                                                            }
                                                            renderContext3 = renderContext;
                                                        }
                                                    } else {
                                                        if (contentNode2 instanceof BulletListContentNode) {
                                                            int i46 = 0;
                                                            RenderContext copy$default = RenderContext.copy$default(renderContext, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, null, null, false, null, null, 0.0f, null, false, -1, 7, null);
                                                            renderContext3 = renderContext;
                                                            BulletListContentNode bulletListContentNode = (BulletListContentNode) contentNode2;
                                                            boolean ordered = bulletListContentNode.getOrdered();
                                                            if (ordered) {
                                                                Long start = bulletListContentNode.getStart();
                                                                j = start != null ? start.longValue() : 1L;
                                                                copy$default = RenderContext.copy$default(copy$default, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, null, Long.valueOf((bulletListContentNode.getItems().size() - 1) + j), false, null, null, 0.0f, null, false, -268435457, 7, null);
                                                            } else {
                                                                j = 0;
                                                            }
                                                            if (renderContext3.getSingleLine()) {
                                                                draweeSpanStringBuilder2 = draweeSpanStringBuilder;
                                                            } else {
                                                                draweeSpanStringBuilder2 = draweeSpanStringBuilder;
                                                                ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder2, SizeUtilsKt.getDpToPx(2));
                                                            }
                                                            int i47 = 0;
                                                            for (Object obj24 : bulletListContentNode.getItems()) {
                                                                int i48 = i47 + 1;
                                                                if (i47 >= 0) {
                                                                    List list2 = (List) obj24;
                                                                    ArrayList arrayList = new ArrayList();
                                                                    int size = list2.size();
                                                                    int i49 = i46;
                                                                    int i50 = i47 == bulletListContentNode.getItems().size() + (-1) ? 1 : i49;
                                                                    int i51 = i49;
                                                                    for (Object obj25 : list2) {
                                                                        int i52 = i51 + 1;
                                                                        if (i51 >= 0) {
                                                                            ContentNode contentNode3 = (ContentNode) obj25;
                                                                            boolean z14 = contentNode3 instanceof BulletListContentNode;
                                                                            int i53 = i51 == size + (-1) ? 1 : i49;
                                                                            if (!z14) {
                                                                                arrayList.add(contentNode3);
                                                                            }
                                                                            if (z14 || i53 != 0) {
                                                                                if (ordered) {
                                                                                    if (copy$default.getListOrderedIndex() != null) {
                                                                                        Long listOrderedIndex = copy$default.getListOrderedIndex();
                                                                                        j5 = (listOrderedIndex != null ? listOrderedIndex.longValue() : 0L) + 1;
                                                                                    } else {
                                                                                        j5 = j;
                                                                                    }
                                                                                    copy$default = RenderContext.copy$default(copy$default, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, 0, Long.valueOf(j5), null, false, null, null, 0.0f, null, false, -134217729, 7, null);
                                                                                }
                                                                                RenderContext renderContext4 = copy$default;
                                                                                appendBulletPoint(draweeSpanStringBuilder2, arrayList, renderContext4, ordered);
                                                                                if (renderContext3.getSingleLine()) {
                                                                                    simulateInlineNewline(draweeSpanStringBuilder2);
                                                                                }
                                                                                arrayList.clear();
                                                                                copy$default = renderContext4;
                                                                            }
                                                                            if (z14) {
                                                                                appendToExistingBuilder(b0.c(contentNode3), RenderContext.copy$default(copy$default, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, false, false, false, false, false, false, null, null, copy$default.getListNestedLevel() + 1, null, null, false, null, null, 0.0f, null, false, -469762049, 7, null), draweeSpanStringBuilder2);
                                                                            }
                                                                            i51 = i52;
                                                                        } else {
                                                                            c0.k();
                                                                            throw null;
                                                                        }
                                                                    }
                                                                    if (!renderContext3.getSingleLine() && z5 && i50 != 0) {
                                                                        ensureTrailingSpacerNewLineOfSize(draweeSpanStringBuilder2, SizeUtilsKt.getDpToPx(2));
                                                                    }
                                                                    i47 = i48;
                                                                    i46 = i49;
                                                                } else {
                                                                    c0.k();
                                                                    throw null;
                                                                }
                                                            }
                                                            i19 = i46;
                                                            Unit unit15 = Unit.a;
                                                        } else {
                                                            draweeSpanStringBuilder2 = draweeSpanStringBuilder5;
                                                            i19 = 0;
                                                            renderContext3 = renderContext;
                                                            if (contentNode2 instanceof StrongContentNode) {
                                                                Object[] objArr21 = {new GGSansBoldSpan(renderContext3.getContext())};
                                                                int length23 = draweeSpanStringBuilder2.length();
                                                                appendToExistingBuilder(((StrongContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder2);
                                                                Object obj26 = objArr21[0];
                                                                if (obj26 != null) {
                                                                    draweeSpanStringBuilder2.setSpan(obj26, length23, draweeSpanStringBuilder2.length(), 33);
                                                                }
                                                            } else if (contentNode2 instanceof TextContentNode) {
                                                                String content3 = ((TextContentNode) contentNode2).getContent();
                                                                if (content3 != null) {
                                                                    draweeSpanStringBuilder2.append((CharSequence) content3);
                                                                    Unit unit16 = Unit.a;
                                                                }
                                                            } else if (contentNode2 instanceof TimestampContentNode) {
                                                                TimestampContentNode timestampContentNode = (TimestampContentNode) contentNode2;
                                                                ClickableSpan clickableSpan9 = new ClickableSpan(null, Integer.valueOf(ColorUtilsKt.getThemeColor(context, R.color.primary_600, R.color.primary_200, renderContext3.getTheme())), null, null, 0.0f, null, null, false, new b7.a(21, renderContext3, timestampContentNode), 253, null);
                                                                if (renderContext3.spoilerIsHidden()) {
                                                                    spoilerRevealedBackground = renderContext3.getTheme().getSpoilerHiddenBackground();
                                                                } else {
                                                                    spoilerRevealedBackground = renderContext3.spoilerIsRevealed() ? renderContext3.getTheme().getSpoilerRevealedBackground() : ColorUtilsKt.getThemeColor(context, R.color.border_subtle_light, R.color.border_subtle_dark, renderContext3.getTheme());
                                                                }
                                                                Object[] objArr22 = {clickableSpan9, new BackgroundSpan(new BackgroundStyle(spoilerRevealedBackground, 0, 0, 6, (DefaultConstructorMarker) null), null, null, 6, null)};
                                                                int length24 = draweeSpanStringBuilder2.length();
                                                                draweeSpanStringBuilder2.append((CharSequence) timestampContentNode.getFormatted());
                                                                for (int i54 = 0; i54 < 2; i54++) {
                                                                    Object obj27 = objArr22[i54];
                                                                    if (obj27 != null) {
                                                                        draweeSpanStringBuilder2.setSpan(obj27, length24, draweeSpanStringBuilder2.length(), 33);
                                                                    }
                                                                }
                                                            } else if (contentNode2 instanceof UnderlineContentNode) {
                                                                Object[] objArr23 = {new UnderlineSpan()};
                                                                int length25 = draweeSpanStringBuilder2.length();
                                                                appendToExistingBuilder(((UnderlineContentNode) contentNode2).getContent(), renderContext3, draweeSpanStringBuilder2);
                                                                Object obj28 = objArr23[0];
                                                                if (obj28 != null) {
                                                                    draweeSpanStringBuilder2.setSpan(obj28, length25, draweeSpanStringBuilder2.length(), 33);
                                                                }
                                                            } else if (contentNode2 instanceof ChannelNameContentNode) {
                                                                draweeSpanStringBuilder2.append(FIRST_STRONG_ISOLATE);
                                                                ChannelNameContentNode channelNameContentNode = (ChannelNameContentNode) contentNode2;
                                                                if (channelNameContentNode.getIcon() != null) {
                                                                    int iconSize6 = getIconSize(channelNameContentNode.getIconType(), renderContext3.getBaselineHeightPx());
                                                                    draweeSpanStringBuilder5 = draweeSpanStringBuilder2;
                                                                    appendImage$default(draweeSpanStringBuilder5, context, renderContext3, channelNameContentNode.getIcon(), iconSize6, iconSize6, Integer.valueOf(themeColor2), 0.0f, iconSize6 * getIconPaddingMultiplier(channelNameContentNode.getIconType()), 64, null);
                                                                } else {
                                                                    draweeSpanStringBuilder5 = draweeSpanStringBuilder2;
                                                                }
                                                                appendToExistingBuilder(channelNameContentNode.getContent(), renderContext3, draweeSpanStringBuilder5);
                                                                draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                                            } else {
                                                                draweeSpanStringBuilder5 = draweeSpanStringBuilder2;
                                                                if (contentNode2 instanceof GuildNameContentNode) {
                                                                    draweeSpanStringBuilder5.append(FIRST_STRONG_ISOLATE);
                                                                    int iconSize7 = getIconSize("_guild", renderContext3.getBaselineHeightPx());
                                                                    GuildNameContentNode guildNameContentNode = (GuildNameContentNode) contentNode2;
                                                                    if (guildNameContentNode.getIcon() != null) {
                                                                        float f2 = iconSize7;
                                                                        appendImage$default(draweeSpanStringBuilder5, context, renderContext3, guildNameContentNode.getIcon(), iconSize7, iconSize7, null, f2 * 0.2f, f2 * 0.1f, 32, null);
                                                                    }
                                                                    draweeSpanStringBuilder5.append((CharSequence) guildNameContentNode.getContent());
                                                                    draweeSpanStringBuilder5.append(POP_DIRECTIONAL_ISOLATE);
                                                                } else if (contentNode2 instanceof SoundmojiContentNode) {
                                                                    VerticalPaddingSpan verticalPaddingSpan = new VerticalPaddingSpan(SizeUtilsKt.getDpToPx(4));
                                                                    DiscordFontSpan discordFontSpan5 = new DiscordFontSpan(renderContext3.getContext(), DiscordFont.PrimarySemibold);
                                                                    SoundmojiContentNode soundmojiContentNode = (SoundmojiContentNode) contentNode2;
                                                                    ClickableSpan clickableSpan10 = new ClickableSpan(null, null, null, null, 0.0f, null, null, false, new b7.a(22, renderContext3, soundmojiContentNode), 255, null);
                                                                    ForegroundColorSpan foregroundColorSpan8 = new ForegroundColorSpan(renderContext3.getTheme().getTextDefault());
                                                                    i19 = 0;
                                                                    BackgroundSpan backgroundSpan5 = new BackgroundSpan(new BackgroundStyle(renderContext3.getTheme().getCardBackgroundDefault(), 4, 2), new BorderStyle(renderContext3.getTheme().getBorderStrong(), SizeUtilsKt.getDpToPx(1)), new ShadowStyle(Color.argb(63, 0, 0, 0), SizeUtilsKt.getDpToPx(4), new SizeF(0.0f, 4.0f)));
                                                                    draweeSpanStringBuilder5.append(" ");
                                                                    if (renderContext3.spoilerExists() && !renderContext3.spoilerIsRevealed()) {
                                                                        int length26 = draweeSpanStringBuilder5.length();
                                                                        toSpannable$lambda$72$lambda$71(draweeSpanStringBuilder5, soundmojiContentNode, context, renderContext3, draweeSpanStringBuilder5);
                                                                        Object obj29 = new Object[]{verticalPaddingSpan}[0];
                                                                        if (obj29 != null) {
                                                                            draweeSpanStringBuilder5.setSpan(obj29, length26, draweeSpanStringBuilder5.length(), 33);
                                                                        }
                                                                    } else {
                                                                        Object[] objArr24 = {verticalPaddingSpan, discordFontSpan5, clickableSpan10, foregroundColorSpan8, backgroundSpan5};
                                                                        int length27 = draweeSpanStringBuilder5.length();
                                                                        toSpannable$lambda$72$lambda$71(draweeSpanStringBuilder5, soundmojiContentNode, context, renderContext3, draweeSpanStringBuilder5);
                                                                        for (int i55 = 0; i55 < 5; i55++) {
                                                                            Object obj30 = objArr24[i55];
                                                                            if (obj30 != null) {
                                                                                draweeSpanStringBuilder5.setSpan(obj30, length27, draweeSpanStringBuilder5.length(), 33);
                                                                            }
                                                                        }
                                                                    }
                                                                    draweeSpanStringBuilder5.append(" ");
                                                                } else if (contentNode2 instanceof ErrorContentNode) {
                                                                    CrashReporting.captureException$default(CrashReporting.INSTANCE, ((ErrorContentNode) contentNode2).getThrowable(), false, 2, null);
                                                                    draweeSpanStringBuilder5.append("���");
                                                                } else {
                                                                    throw new n();
                                                                }
                                                            }
                                                        }
                                                        draweeSpanStringBuilder5 = draweeSpanStringBuilder2;
                                                    }
                                                }
                                            }
                                            renderContext3 = renderContext3;
                                        }
                                    }
                                }
                            } else {
                                renderContext3 = renderContext;
                                draweeSpanStringBuilder5.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                            }
                            i15 = i16;
                            num2 = num;
                        }
                        i15 = i16;
                        num2 = num;
                    }
                }
                num = num2;
                i15 = i16;
                num2 = num;
            } else {
                c0.k();
                throw null;
            }
        }
        if (z5) {
            fixTrailingAbsoluteSizeSpanIfPresent(draweeSpanStringBuilder5);
        }
        return draweeSpanStringBuilder5;
    }

    public static /* synthetic */ DraweeSpanStringBuilder toSpannable$default(List list, RenderContext renderContext, DraweeSpanStringBuilder draweeSpanStringBuilder, boolean z5, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            draweeSpanStringBuilder = new DraweeSpanStringBuilder();
        }
        if ((i5 & 4) != 0) {
            z5 = true;
        }
        return toSpannable(list, renderContext, draweeSpanStringBuilder, z5);
    }
}
