package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.graphics.Paint;
import android.text.TextPaint;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.forums.PostSharePrompt;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.databinding.ForumPostActionBarViewBinding;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.core.DCDButton;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.image.fresco.SimpleDraweeSpanTextViewUtilsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.primitives.MessageId;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.react_strings.RenderContext;
import com.discord.reactions.AddReactionView;
import com.discord.reactions.ReactionView;
import com.discord.reactions.ShortcutsFlexbox;
import com.discord.ripple.RippleUtilsKt;
import com.discord.theme.R;
import com.discord.theme.ThemeManagerKt;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.span.SimpleDraweeSpanTextView;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B'\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJY\u0010\u0015\u001a\u00020\u00122\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000b0\n2\b\u0010\u000e\u001a\u0004\u0018\u00010\r2\u0006\u0010\u0010\u001a\u00020\u000f2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u00112\u0014\b\u0002\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u0011H\u0002¢\u0006\u0004\b\u0015\u0010\u0016JU\u0010$\u001a\u00020\u00122\u0006\u0010\u0018\u001a\u00020\u00172\b\u0010\u001a\u001a\u0004\u0018\u00010\u00192\u0006\u0010\u001b\u001a\u00020\u000f2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001c2\u0006\u0010\u001e\u001a\u00020\u000f2\u0018\u0010!\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020 \u0012\u0004\u0012\u00020\u00120\u001fH\u0002¢\u0006\u0004\b\"\u0010#Jñ\u0001\u00105\u001a\u00020\u00122\u0006\u0010\u0018\u001a\u00020\u00172\u0006\u0010%\u001a\u00020\u00062\u0006\u0010'\u001a\u00020&2\b\u0010(\u001a\u0004\u0018\u00010\u001c2\u0006\u0010)\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001c2\u0006\u0010*\u001a\u00020\u001c2\u000e\u0010+\u001a\n\u0012\u0004\u0012\u00020\u000b\u0018\u00010\n2\b\u0010,\u001a\u0004\u0018\u00010\u000b2\u0006\u0010-\u001a\u00020&2\u0006\u0010.\u001a\u00020\u001c2\b\u0010\u000e\u001a\u0004\u0018\u00010\r2\u0006\u0010\u0010\u001a\u00020\u000f2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u00112\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u00112\u0006\u0010/\u001a\u00020\u000f2\u0006\u0010\u001b\u001a\u00020\u000f2\u0006\u00100\u001a\u00020\u000f2\b\u00101\u001a\u0004\u0018\u00010\u00192\u0006\u00102\u001a\u00020\u000f2\u0018\u0010!\u001a\u0014\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020 \u0012\u0004\u0012\u00020\u00120\u001f¢\u0006\u0004\b3\u00104R\u0014\u00107\u001a\u0002068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b7\u00108¨\u00069"}, d2 = {"Lcom/discord/chat/presentation/message/view/ForumPostActionBarView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "Landroid/content/Context;", "context", "Landroid/util/AttributeSet;", "attrs", "", "defStyleAttr", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "", "Lcom/discord/reactions/ReactionView$Reaction;", "reactionsToDisplay", "Lcom/discord/reactions/ReactionView$ReactionsTheme;", "reactionsTheme", "Landroid/view/View$OnClickListener;", "onAddReactionClick", "Lkotlin/Function1;", "", "onReactionClick", "onReactionLongPress", "setReactions", "(Ljava/util/List;Lcom/discord/reactions/ReactionView$ReactionsTheme;Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;)V", "Lcom/discord/primitives/MessageId;", "messageId", "Lcom/discord/chat/bridge/forums/PostSharePrompt;", "postSharePrompt", "onTapShareForumPost", "", "shareIcon", "onTapDismissSharePrompt", "Lkotlin/Function2;", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "onLinkClicked", "setSharePrompt-LdU2QRA", "(Ljava/lang/String;Lcom/discord/chat/bridge/forums/PostSharePrompt;Landroid/view/View$OnClickListener;Ljava/lang/String;Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function2;)V", "setSharePrompt", "numDisplayedReactions", "", "isFollowing", "followIcon", "followLabel", "shareLabel", "reactions", "defaultReaction", "canAddNewReactions", "addNewReactionAccessibilityLabel", "onTapFollowForumPost", "onTapReactionOverflow", "sharePrompt", "onDismissSharePromptClick", "configure-CgeVRR0", "(Ljava/lang/String;IZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/discord/reactions/ReactionView$Reaction;ZLjava/lang/String;Lcom/discord/reactions/ReactionView$ReactionsTheme;Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;Lcom/discord/chat/bridge/forums/PostSharePrompt;Landroid/view/View$OnClickListener;Lkotlin/jvm/functions/Function2;)V", "configure", "Lcom/discord/chat/databinding/ForumPostActionBarViewBinding;", "binding", "Lcom/discord/chat/databinding/ForumPostActionBarViewBinding;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nForumPostActionBarView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ForumPostActionBarView.kt\ncom/discord/chat/presentation/message/view/ForumPostActionBarView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,264:1\n257#2,2:265\n257#2,2:267\n257#2,2:269\n257#2,2:271\n255#2:273\n257#2,2:274\n255#2:276\n257#2,2:277\n257#2,2:279\n*S KotlinDebug\n*F\n+ 1 ForumPostActionBarView.kt\ncom/discord/chat/presentation/message/view/ForumPostActionBarView\n*L\n114#1:265,2\n124#1:267,2\n129#1:269,2\n143#1:271,2\n144#1:273\n179#1:274,2\n180#1:276\n207#1:277,2\n228#1:279,2\n*E\n"})
/* loaded from: classes.dex */
public final class ForumPostActionBarView extends ConstraintLayout {

    @NotNull
    private final ForumPostActionBarViewBinding binding;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ForumPostActionBarView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit configure_CgeVRR0$lambda$8$lambda$7(int i5, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("count", String.valueOf(i5));
        return Unit.a;
    }

    private final void setReactions(List<? extends ReactionView.Reaction> reactionsToDisplay, ReactionView.ReactionsTheme reactionsTheme, View.OnClickListener onAddReactionClick, Function1<? super ReactionView.Reaction, Unit> onReactionClick, Function1<? super ReactionView.Reaction, Unit> onReactionLongPress) {
        ShortcutsFlexbox reactionsView = this.binding.reactionsView;
        Intrinsics.checkNotNullExpressionValue(reactionsView, "reactionsView");
        reactionsView.setVisibility(0);
        this.binding.reactionsView.setReactions(reactionsToDisplay, false, "", reactionsTheme, (r23 & 16) != 0 ? new com.discord.chat.presentation.message.system.b(6) : onAddReactionClick, onReactionClick, (r23 & 64) != 0 ? new kr.n(19) : onReactionLongPress, (r23 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : null, (r23 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? false : false);
    }

    public static /* synthetic */ void setReactions$default(ForumPostActionBarView forumPostActionBarView, List list, ReactionView.ReactionsTheme reactionsTheme, View.OnClickListener onClickListener, Function1 function1, Function1 function12, int i5, Object obj) {
        if ((i5 & 16) != 0) {
            function12 = new com.discord.chat.presentation.list.delegate.a(19);
        }
        forumPostActionBarView.setReactions(list, reactionsTheme, onClickListener, function1, function12);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setReactions$lambda$12(ReactionView.Reaction it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* renamed from: setSharePrompt-LdU2QRA, reason: not valid java name */
    private final void m755setSharePromptLdU2QRA(String messageId, PostSharePrompt postSharePrompt, View.OnClickListener onTapShareForumPost, String shareIcon, View.OnClickListener onTapDismissSharePrompt, Function2<? super MessageId, ? super LinkContentNode, Unit> onLinkClicked) {
        DraweeSpanStringBuilder spannable;
        ConstraintLayout sharePromptContainer = this.binding.sharePromptContainer;
        Intrinsics.checkNotNullExpressionValue(sharePromptContainer, "sharePromptContainer");
        sharePromptContainer.setVisibility(postSharePrompt != null ? 0 : 8);
        if (postSharePrompt != null) {
            this.binding.sharePromptTitle.setText(postSharePrompt.getTitle());
            DCDButton dCDButton = this.binding.sharePromptCopyLinkButton;
            if (shareIcon != null) {
                dCDButton.setIcon(shareIcon, SizeUtilsKt.getDpToPx(16));
            }
            dCDButton.setText(postSharePrompt.getCta());
            dCDButton.setContentDescription(postSharePrompt.getCta());
            dCDButton.setOnClickButtonListener(onTapShareForumPost);
            DCDButton dCDButton2 = this.binding.sharePromptCloseButton;
            dCDButton2.setIcon(postSharePrompt.getCloseIcon(), SizeUtilsKt.getDpToPx(16));
            dCDButton2.setOnClickButtonListener(onTapDismissSharePrompt);
            SimpleDraweeView sharePromptIcon = this.binding.sharePromptIcon;
            Intrinsics.checkNotNullExpressionValue(sharePromptIcon, "sharePromptIcon");
            ReactAssetUtilsKt.setOptionalReactImageUrl(sharePromptIcon, postSharePrompt.getIcon());
            SimpleDraweeSpanTextView simpleDraweeSpanTextView = this.binding.sharePromptSubtitle;
            Intrinsics.checkNotNull(simpleDraweeSpanTextView);
            StructurableText subtitle = postSharePrompt.getSubtitle();
            Context context = simpleDraweeSpanTextView.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            Paint.FontMetrics fontMetrics = simpleDraweeSpanTextView.getPaint().getFontMetrics();
            Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
            float baselineHeightPx = TextUtilsKt.getBaselineHeightPx(fontMetrics);
            TextPaint paint = simpleDraweeSpanTextView.getPaint();
            Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
            spannable = TextUtilsKt.toSpannable(subtitle, context, messageId, false, false, false, false, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : false, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : new a(onLinkClicked, messageId, 5), (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : null, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
            SimpleDraweeSpanTextViewUtilsKt.setOptionalText(simpleDraweeSpanTextView, spannable);
            NestedScrollOnTouchUtilsKt.enableNestedSpanClickListener$default(simpleDraweeSpanTextView, false, 1, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setSharePrompt_LdU2QRA$lambda$16$lambda$15(Function2 function2, String str, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        function2.invoke(MessageId.m1189boximpl(str), node);
        return Unit.a;
    }

    /* renamed from: configure-CgeVRR0, reason: not valid java name */
    public final void m756configureCgeVRR0(@NotNull String messageId, int numDisplayedReactions, boolean isFollowing, String followIcon, @NotNull String followLabel, String shareIcon, @NotNull String shareLabel, List<? extends ReactionView.Reaction> reactions, ReactionView.Reaction defaultReaction, boolean canAddNewReactions, @NotNull String addNewReactionAccessibilityLabel, ReactionView.ReactionsTheme reactionsTheme, @NotNull View.OnClickListener onAddReactionClick, @NotNull Function1<? super ReactionView.Reaction, Unit> onReactionClick, @NotNull Function1<? super ReactionView.Reaction, Unit> onReactionLongPress, @NotNull View.OnClickListener onTapFollowForumPost, @NotNull View.OnClickListener onTapShareForumPost, @NotNull View.OnClickListener onTapReactionOverflow, PostSharePrompt sharePrompt, @NotNull View.OnClickListener onDismissSharePromptClick, @NotNull Function2<? super MessageId, ? super LinkContentNode, Unit> onLinkClicked) {
        int i5;
        View.OnClickListener onClickListener;
        int i6;
        int i10;
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(followLabel, "followLabel");
        Intrinsics.checkNotNullParameter(shareLabel, "shareLabel");
        Intrinsics.checkNotNullParameter(addNewReactionAccessibilityLabel, "addNewReactionAccessibilityLabel");
        Intrinsics.checkNotNullParameter(onAddReactionClick, "onAddReactionClick");
        Intrinsics.checkNotNullParameter(onReactionClick, "onReactionClick");
        Intrinsics.checkNotNullParameter(onReactionLongPress, "onReactionLongPress");
        Intrinsics.checkNotNullParameter(onTapFollowForumPost, "onTapFollowForumPost");
        Intrinsics.checkNotNullParameter(onTapShareForumPost, "onTapShareForumPost");
        Intrinsics.checkNotNullParameter(onTapReactionOverflow, "onTapReactionOverflow");
        Intrinsics.checkNotNullParameter(onDismissSharePromptClick, "onDismissSharePromptClick");
        Intrinsics.checkNotNullParameter(onLinkClicked, "onLinkClicked");
        if (reactions == null || reactions.isEmpty()) {
            DCDButton otherReactionsCount = this.binding.otherReactionsCount;
            Intrinsics.checkNotNullExpressionValue(otherReactionsCount, "otherReactionsCount");
            otherReactionsCount.setVisibility(8);
            if (defaultReaction == null || !canAddNewReactions) {
                i5 = 2;
                onClickListener = onAddReactionClick;
                ShortcutsFlexbox reactionsView = this.binding.reactionsView;
                Intrinsics.checkNotNullExpressionValue(reactionsView, "reactionsView");
                i6 = 8;
                reactionsView.setVisibility(8);
            } else {
                i5 = 2;
                onClickListener = onAddReactionClick;
                setReactions$default(this, b0.c(defaultReaction), reactionsTheme, onClickListener, onReactionClick, null, 16, null);
                i6 = 8;
            }
        } else {
            int i11 = numDisplayedReactions - 1;
            List<? extends ReactionView.Reaction> f02 = CollectionsKt.f0(reactions, i11);
            ShortcutsFlexbox reactionsView2 = this.binding.reactionsView;
            Intrinsics.checkNotNullExpressionValue(reactionsView2, "reactionsView");
            reactionsView2.setVisibility(0);
            setReactions(f02, reactionsTheme, onAddReactionClick, onReactionClick, onReactionLongPress);
            int max = Math.max(reactions.size() - i11, 0);
            DCDButton dCDButton = this.binding.otherReactionsCount;
            Intrinsics.checkNotNull(dCDButton);
            dCDButton.setVisibility(max != 0 ? 0 : 8);
            if (dCDButton.getVisibility() == 0) {
                Context context = dCDButton.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                dCDButton.setText(I18nUtilsKt.i18nFormat(context, I18nMessage.FORUM_REACTIONS_OVERFLOW, new m(max, 0)));
                i10 = 2;
                RippleUtilsKt.addRipple$default(dCDButton, true, 0, 2, null);
                dCDButton.setOnClickButtonListener(onTapReactionOverflow);
            } else {
                i10 = 2;
            }
            Intrinsics.checkNotNull(dCDButton);
            i5 = i10;
            i6 = 8;
            onClickListener = onAddReactionClick;
        }
        DCDButton dCDButton2 = this.binding.followButton;
        if (followIcon != null) {
            dCDButton2.setIcon(followIcon, SizeUtilsKt.getDpToPx(16));
        }
        dCDButton2.setText(followLabel);
        dCDButton2.setContentDescription(followLabel);
        dCDButton2.setTextColor(Integer.valueOf(isFollowing ? ThemeManagerKt.getTheme().getTextBrand() : ThemeManagerKt.getTheme().getInteractiveTextDefault()));
        dCDButton2.setOnClickButtonListener(onTapFollowForumPost);
        DCDButton dCDButton3 = this.binding.shareButton;
        if (shareIcon != null) {
            dCDButton3.setIcon(shareIcon, SizeUtilsKt.getDpToPx(16));
        }
        dCDButton3.setOnClickButtonListener(onTapShareForumPost);
        dCDButton3.setContentDescription(shareLabel);
        AddReactionView addReactionView = this.binding.addReaction;
        Intrinsics.checkNotNull(addReactionView);
        if (canAddNewReactions) {
            i6 = 0;
        }
        addReactionView.setVisibility(i6);
        if (addReactionView.getVisibility() == 0) {
            RippleUtilsKt.addRipple$default(addReactionView, true, 0, i5, null);
            addReactionView.setContentDescription(addNewReactionAccessibilityLabel);
            NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(addReactionView, false, onClickListener, 1, null);
            AddReactionView.configure$default(addReactionView, reactionsTheme, false, null, false, 12, null);
        }
        m755setSharePromptLdU2QRA(messageId, sharePrompt, onTapShareForumPost, shareIcon, onDismissSharePromptClick, onLinkClicked);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ForumPostActionBarView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ ForumPostActionBarView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ForumPostActionBarView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        ForumPostActionBarViewBinding inflate = ForumPostActionBarViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        inflate.footerDivider.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundSurfaceHigh());
        inflate.headerDivider.setBackgroundColor(ThemeManagerKt.getTheme().getBorderSubtle());
        DCDButton dCDButton = inflate.followButton;
        dCDButton.setCornerRadius(SizeUtilsKt.getDpToPx(8));
        dCDButton.setTextSizeSp(14.0f);
        dCDButton.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundSurfaceHigh());
        DCDButton dCDButton2 = inflate.shareButton;
        dCDButton2.setCornerRadius(SizeUtilsKt.getDpToPx(8));
        dCDButton2.setTextSizeSp(14.0f);
        dCDButton2.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundSurfaceHigh());
        dCDButton2.setTextColor(Integer.valueOf(ThemeManagerKt.getTheme().getInteractiveTextDefault()));
        dCDButton2.setIconPadding(0);
        DCDButton dCDButton3 = inflate.otherReactionsCount;
        DiscordFont discordFont = DiscordFont.PrimarySemibold;
        dCDButton3.setDiscordFont(discordFont);
        dCDButton3.setTextSizeSp(14.0f);
        dCDButton3.setBackgroundColor(ThemeManagerKt.getTheme().getBackgroundSurfaceHigh());
        dCDButton3.setTextColor(Integer.valueOf(ThemeManagerKt.getTheme().getInteractiveTextDefault()));
        TextView textView = inflate.sharePromptTitle;
        textView.setTextColor(ThemeManagerKt.getTheme().getMobileTextHeadingPrimary());
        Intrinsics.checkNotNull(textView);
        SetTextSizeSpKt.setTextSizeSp(textView, 16.0f);
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        SimpleDraweeSpanTextView simpleDraweeSpanTextView = inflate.sharePromptSubtitle;
        simpleDraweeSpanTextView.setTextColor(ThemeManagerKt.getTheme().getTextDefault());
        Intrinsics.checkNotNull(simpleDraweeSpanTextView);
        SetTextSizeSpKt.setTextSizeSp(simpleDraweeSpanTextView, 14.0f);
        DiscordFont discordFont2 = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(simpleDraweeSpanTextView, discordFont2);
        DCDButton dCDButton4 = inflate.sharePromptCopyLinkButton;
        dCDButton4.setCornerRadius(SizeUtilsKt.getDpToPx(20));
        dCDButton4.setTextSizeSp(14.0f);
        dCDButton4.setBackgroundColor(context.getColor(R.color.brand_500));
        dCDButton4.setTextColor(Integer.valueOf(ThemeManagerKt.getTheme().getWhite()));
        dCDButton4.setDiscordFont(discordFont2);
        dCDButton4.setIconPadding(8);
        DCDButton dCDButton5 = inflate.sharePromptCloseButton;
        dCDButton5.setTextColor(Integer.valueOf(ThemeManagerKt.getTheme().getInteractiveTextDefault()));
        dCDButton5.setBackgroundColor(0);
        dCDButton5.setContentDescription(I18nUtilsKt.i18nFormat$default(context, I18nMessage.DISMISS, null, 2, null));
    }
}
