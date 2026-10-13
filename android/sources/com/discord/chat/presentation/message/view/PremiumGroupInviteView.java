package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.text.TextPaint;
import android.text.method.LinkMovementMethod;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.widget.TextView;
import androidx.cardview.widget.CardView;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.premium_group_invite.PremiumGroupInviteEmbed;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.databinding.PremiumGroupInviteViewBinding;
import com.discord.chat.presentation.message.messagepart.PremiumGroupInviteMessageAccessory;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.primitives.MessageId;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u001d\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0006\u0010\u0007J/\u0010\u000f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\b2\u0018\u0010\u000e\u001a\u0014\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\r0\n¢\u0006\u0004\b\u000f\u0010\u0010R\u0017\u0010\u0012\u001a\u00020\u00118\u0006¢\u0006\f\n\u0004\b\u0012\u0010\u0013\u001a\u0004\b\u0014\u0010\u0015¨\u0006\u0016"}, d2 = {"Lcom/discord/chat/presentation/message/view/PremiumGroupInviteView;", "Landroidx/cardview/widget/CardView;", "Landroid/content/Context;", "context", "Landroid/util/AttributeSet;", "attrs", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "Lcom/discord/chat/presentation/message/messagepart/PremiumGroupInviteMessageAccessory;", "accessory", "Lkotlin/Function2;", "Lcom/discord/primitives/MessageId;", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "", "onTapLink", "bind", "(Lcom/discord/chat/presentation/message/messagepart/PremiumGroupInviteMessageAccessory;Lkotlin/jvm/functions/Function2;)V", "Lcom/discord/chat/databinding/PremiumGroupInviteViewBinding;", "binding", "Lcom/discord/chat/databinding/PremiumGroupInviteViewBinding;", "getBinding", "()Lcom/discord/chat/databinding/PremiumGroupInviteViewBinding;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class PremiumGroupInviteView extends CardView {

    @NotNull
    private final PremiumGroupInviteViewBinding binding;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public PremiumGroupInviteView(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit bind$lambda$4$lambda$3(Function2 function2, PremiumGroupInviteMessageAccessory premiumGroupInviteMessageAccessory, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        function2.invoke(MessageId.m1189boximpl(premiumGroupInviteMessageAccessory.getMessageId()), node);
        return Unit.a;
    }

    public final void bind(@NotNull PremiumGroupInviteMessageAccessory accessory, @NotNull Function2<? super MessageId, ? super LinkContentNode, Unit> onTapLink) {
        DraweeSpanStringBuilder spannable;
        Intrinsics.checkNotNullParameter(accessory, "accessory");
        Intrinsics.checkNotNullParameter(onTapLink, "onTapLink");
        PremiumGroupInviteEmbed premiumGroupInvite = accessory.getPremiumGroupInvite();
        setCardBackgroundColor(premiumGroupInvite.getBackgroundColor());
        SimpleDraweeView headerImage = this.binding.headerImage;
        Intrinsics.checkNotNullExpressionValue(headerImage, "headerImage");
        ReactAssetUtilsKt.setOptionalReactImageUrl(headerImage, premiumGroupInvite.getHeaderImageUrl());
        TextView textView = this.binding.betaPill;
        textView.setText(premiumGroupInvite.getBetaPillText());
        textView.setTextColor(premiumGroupInvite.getBetaPillTextColor());
        textView.getBackground().setTint(premiumGroupInvite.getBetaPillBackgroundColor());
        TextView textView2 = this.binding.headerText;
        textView2.setText(premiumGroupInvite.getHeaderText());
        textView2.setTextColor(premiumGroupInvite.getHeaderColor());
        TextView textView3 = this.binding.bodyText;
        textView3.setText(premiumGroupInvite.getBodyText());
        textView3.setTextColor(premiumGroupInvite.getBodyTextColor());
        TextView textView4 = this.binding.learnMoreLink;
        AnnotatedStructurableText learnMoreLink = premiumGroupInvite.getLearnMoreLink();
        Context context = textView4.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        String m1196toStringimpl = MessageId.m1196toStringimpl(accessory.getMessageId());
        TextPaint paint = textView4.getPaint();
        Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
        spannable = TextUtilsKt.toSpannable(learnMoreLink, context, m1196toStringimpl, false, false, false, false, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : false, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : new b7.a(12, onTapLink, accessory), (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : null, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : 0.0f, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
        textView4.setText(spannable);
        textView4.setMovementMethod(LinkMovementMethod.getInstance());
    }

    @NotNull
    public final PremiumGroupInviteViewBinding getBinding() {
        return this.binding;
    }

    public /* synthetic */ PremiumGroupInviteView(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public PremiumGroupInviteView(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        PremiumGroupInviteViewBinding inflate = PremiumGroupInviteViewBinding.inflate(LayoutInflater.from(context), this, true);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        setUseCompatPadding(true);
        setClickable(true);
        setRadius(SizeUtilsKt.getDpToPx(5));
        setCardElevation(SizeUtilsKt.getDpToPx(1));
        TextView headerText = inflate.headerText;
        Intrinsics.checkNotNullExpressionValue(headerText, "headerText");
        DiscordFontUtilsKt.setDiscordFont(headerText, DiscordFont.PrimarySemibold);
        TextView bodyText = inflate.bodyText;
        Intrinsics.checkNotNullExpressionValue(bodyText, "bodyText");
        DiscordFont discordFont = DiscordFont.PrimaryNormal;
        DiscordFontUtilsKt.setDiscordFont(bodyText, discordFont);
        TextView learnMoreLink = inflate.learnMoreLink;
        Intrinsics.checkNotNullExpressionValue(learnMoreLink, "learnMoreLink");
        DiscordFontUtilsKt.setDiscordFont(learnMoreLink, discordFont);
    }
}
