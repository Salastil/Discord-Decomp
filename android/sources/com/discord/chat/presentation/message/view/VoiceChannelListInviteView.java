package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.graphics.Rect;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbedImpl;
import com.discord.chat.bridge.codedlinks.VoiceUser;
import com.discord.chat.databinding.VoiceChannelListInviteViewBinding;
import com.discord.core.DCDButton;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetExtensionsKt;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.StringsKt;
import kotlinx.coroutines.Job;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u00002\u00020\u0001B'\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0010\u0010\u001b\u001a\u00020\u00182\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J\b\u0010\u001e\u001a\u00020\u001fH\u0014J\b\u0010 \u001a\u00020\u001fH\u0014J2\u0010!\u001a\u00020\u001f2\u0006\u0010\"\u001a\u00020#2\b\u0010$\u001a\u0004\u0018\u00010%2\b\u0010&\u001a\u0004\u0018\u00010%2\u000e\b\u0002\u0010'\u001a\b\u0012\u0004\u0012\u00020\u001f0(J\b\u0010)\u001a\u00020\u001fH\u0002J\b\u0010*\u001a\u00020\u001fH\u0002J\u0010\u0010+\u001a\u00020\u00182\u0006\u0010\u001c\u001a\u00020\u001dH\u0002J\u0012\u0010,\u001a\u00020-2\b\b\u0001\u0010.\u001a\u00020\u0007H\u0002J\b\u0010/\u001a\u00020\u001fH\u0002J\u0010\u00100\u001a\u00020\u001f2\u0006\u00101\u001a\u00020\u0018H\u0002J\b\u00102\u001a\u00020\u001fH\u0002R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0010R\u000e\u0010\u0011\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000¨\u00063"}, d2 = {"Lcom/discord/chat/presentation/message/view/VoiceChannelListInviteView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "binding", "Lcom/discord/chat/databinding/VoiceChannelListInviteViewBinding;", "voiceUserAdapter", "Lcom/discord/chat/presentation/message/view/VoiceUserAdapter;", "callStartTimestampMs", "", "Ljava/lang/Long;", "tickIntervalMs", "timerJob", "Lkotlinx/coroutines/Job;", "lastSubmittedList", "", "Lcom/discord/chat/presentation/message/view/VoiceUserItem;", "canScroll", "", "gradientShown", "reducedMotion", "onInterceptTouchEvent", "event", "Landroid/view/MotionEvent;", "onAttachedToWindow", "", "onDetachedFromWindow", "configure", "invite", "Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbedImpl;", "onTapEmbed", "Landroid/view/View$OnClickListener;", "onTapAccept", "measureAndLayout", "Lkotlin/Function0;", "startTimerIfNeeded", "stopTimer", "isTouchOverScrollableList", "makeScrollGradient", "Landroid/graphics/drawable/GradientDrawable;", ViewProps.COLOR, "updateScrollGradient", "setGradientShown", "shown", "updateTimestampText", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nVoiceChannelListInviteView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 VoiceChannelListInviteView.kt\ncom/discord/chat/presentation/message/view/VoiceChannelListInviteView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,302:1\n257#2,2:303\n257#2,2:305\n257#2,2:307\n311#2:309\n327#2,4:310\n312#2:314\n257#2,2:319\n327#2,4:321\n255#2:325\n1563#3:315\n1634#3,3:316\n*S KotlinDebug\n*F\n+ 1 VoiceChannelListInviteView.kt\ncom/discord/chat/presentation/message/view/VoiceChannelListInviteView\n*L\n158#1:303,2\n165#1:305,2\n166#1:307,2\n173#1:309\n173#1:310,4\n173#1:314\n199#1:319,2\n205#1:321,4\n231#1:325\n182#1:315\n182#1:316,3\n*E\n"})
/* loaded from: classes.dex */
public final class VoiceChannelListInviteView extends ConstraintLayout {

    @NotNull
    private final VoiceChannelListInviteViewBinding binding;
    private Long callStartTimestampMs;
    private boolean canScroll;
    private boolean gradientShown;

    @NotNull
    private List<VoiceUserItem> lastSubmittedList;
    private boolean reducedMotion;
    private long tickIntervalMs;
    private Job timerJob;

    @NotNull
    private final VoiceUserAdapter voiceUserAdapter;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public VoiceChannelListInviteView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void configure$default(VoiceChannelListInviteView voiceChannelListInviteView, VoiceChannelListInviteEmbedImpl voiceChannelListInviteEmbedImpl, View.OnClickListener onClickListener, View.OnClickListener onClickListener2, Function0 function0, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            function0 = new com.discord.chat.presentation.list.a(22);
        }
        voiceChannelListInviteView.configure(voiceChannelListInviteEmbedImpl, onClickListener, onClickListener2, function0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void configure$lambda$11(boolean z5, VoiceChannelListInviteView voiceChannelListInviteView, Function0 function0) {
        if (z5) {
            voiceChannelListInviteView.binding.voiceUsersList.post(new a1.k(11, voiceChannelListInviteView, function0));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void configure$lambda$11$lambda$10(VoiceChannelListInviteView voiceChannelListInviteView, Function0 function0) {
        voiceChannelListInviteView.binding.voiceUsersList.scrollToPosition(0);
        function0.invoke();
    }

    private final boolean isTouchOverScrollableList(MotionEvent event) {
        RecyclerView voiceUsersList = this.binding.voiceUsersList;
        Intrinsics.checkNotNullExpressionValue(voiceUsersList, "voiceUsersList");
        if (voiceUsersList.getVisibility() != 0) {
            return false;
        }
        if (!this.binding.voiceUsersList.canScrollVertically(1) && !this.binding.voiceUsersList.canScrollVertically(-1)) {
            return false;
        }
        Rect rect = new Rect();
        this.binding.voiceUsersList.getHitRect(rect);
        return rect.contains((int) event.getX(), (int) event.getY());
    }

    private final GradientDrawable makeScrollGradient(int color) {
        return new GradientDrawable(GradientDrawable.Orientation.TOP_BOTTOM, new int[]{b1.c.e(color, 0), b1.c.e(color, 204), color});
    }

    private final void setGradientShown(boolean shown) {
        if (this.gradientShown == shown) {
            return;
        }
        this.gradientShown = shown;
        View voiceListScrollGradient = this.binding.voiceListScrollGradient;
        Intrinsics.checkNotNullExpressionValue(voiceListScrollGradient, "voiceListScrollGradient");
        voiceListScrollGradient.animate().cancel();
        float f2 = shown ? 1.0f : 0.0f;
        if (this.reducedMotion) {
            voiceListScrollGradient.setAlpha(f2);
        } else {
            voiceListScrollGradient.animate().alpha(f2).setDuration(200L).start();
        }
    }

    private final void startTimerIfNeeded() {
        if (this.callStartTimestampMs != null && isAttachedToWindow()) {
            updateTimestampText();
            Job job = this.timerJob;
            if (job == null || !job.c()) {
                this.timerJob = nr.x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new VoiceChannelListInviteView$startTimerIfNeeded$1(this, null), 3);
            }
        }
    }

    private final void stopTimer() {
        Job job = this.timerJob;
        if (job != null) {
            job.f(null);
        }
        this.timerJob = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateScrollGradient() {
        boolean z5 = false;
        if (!this.canScroll) {
            setGradientShown(false);
            return;
        }
        RecyclerView.LayoutManager layoutManager = this.binding.voiceUsersList.getLayoutManager();
        LinearLayoutManager linearLayoutManager = layoutManager instanceof LinearLayoutManager ? (LinearLayoutManager) layoutManager : null;
        if (linearLayoutManager == null) {
            return;
        }
        int findLastCompletelyVisibleItemPosition = linearLayoutManager.findLastCompletelyVisibleItemPosition();
        if (findLastCompletelyVisibleItemPosition != -1 && findLastCompletelyVisibleItemPosition >= this.voiceUserAdapter.getItemCount() - 1) {
            z5 = true;
        }
        setGradientShown(!z5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateTimestampText() {
        String p3;
        Long l6 = this.callStartTimestampMs;
        if (l6 != null) {
            long currentTimeMillis = System.currentTimeMillis() - l6.longValue();
            if (currentTimeMillis < 0) {
                currentTimeMillis = 0;
            }
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            long hours = timeUnit.toHours(currentTimeMillis);
            long j = 60;
            long minutes = timeUnit.toMinutes(currentTimeMillis) % j;
            long seconds = timeUnit.toSeconds(currentTimeMillis) % j;
            TextView textView = this.binding.callTimestamp;
            if (hours > 0) {
                StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                p3 = a3.e.p(new Object[]{Long.valueOf(hours), Long.valueOf(minutes), Long.valueOf(seconds)}, 3, Locale.ROOT, "%d:%02d:%02d", "format(...)");
            } else {
                StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
                p3 = a3.e.p(new Object[]{Long.valueOf(minutes), Long.valueOf(seconds)}, 2, Locale.ROOT, "%d:%02d", "format(...)");
            }
            textView.setText(p3);
        }
    }

    public final void configure(@NotNull VoiceChannelListInviteEmbedImpl invite, View.OnClickListener onTapEmbed, View.OnClickListener onTapAccept, @NotNull Function0<Unit> measureAndLayout) {
        Intrinsics.checkNotNullParameter(invite, "invite");
        Intrinsics.checkNotNullParameter(measureAndLayout, "measureAndLayout");
        ConstraintLayout card = this.binding.card;
        Intrinsics.checkNotNullExpressionValue(card, "card");
        ViewBackgroundUtilsKt.setBackgroundRectangle(card, invite.getBackgroundColor(), SizeUtilsKt.getDpToPx(16), Integer.valueOf(invite.getBorderColor()), SizeUtilsKt.getDpToPx(1));
        this.binding.headerSection.setBackgroundColor(invite.getVoiceHeaderBackgroundColor());
        this.binding.voiceListScrollGradient.setBackground(makeScrollGradient(invite.getBackgroundColor()));
        this.binding.privacyHintText.setText(invite.getPrivacyHintText());
        List<VoiceUser> voiceUsers = invite.getVoiceUsers();
        if (voiceUsers == null) {
            voiceUsers = m0.f13512d;
        }
        boolean isEmpty = voiceUsers.isEmpty();
        this.binding.channelName.setText(invite.getTitleText());
        this.binding.channelName.setTextColor(invite.isConnected() ? ThemeManagerKt.getTheme().getMobileTextHeadingPrimary() : ThemeManagerKt.getTheme().getTextMuted());
        SimpleDraweeView voiceIcon = this.binding.voiceIcon;
        Intrinsics.checkNotNullExpressionValue(voiceIcon, "voiceIcon");
        ColorUtilsKt.setTintColor(voiceIcon, invite.getTitleColor());
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested(this, true, onTapEmbed);
        long j = invite.getReducedMotion() ? 15000L : 1000L;
        if (j != this.tickIntervalMs) {
            this.tickIntervalMs = j;
            stopTimer();
        }
        this.callStartTimestampMs = invite.getVoiceStartTimestamp();
        TextView callTimestamp = this.binding.callTimestamp;
        Intrinsics.checkNotNullExpressionValue(callTimestamp, "callTimestamp");
        callTimestamp.setVisibility(invite.getVoiceStartTimestamp() != null ? 0 : 8);
        if (invite.getVoiceStartTimestamp() == null) {
            stopTimer();
        } else {
            startTimerIfNeeded();
        }
        RecyclerView voiceUsersList = this.binding.voiceUsersList;
        Intrinsics.checkNotNullExpressionValue(voiceUsersList, "voiceUsersList");
        voiceUsersList.setVisibility(!isEmpty ? 0 : 8);
        TextView emptyStateText = this.binding.emptyStateText;
        Intrinsics.checkNotNullExpressionValue(emptyStateText, "emptyStateText");
        emptyStateText.setVisibility(isEmpty ? 0 : 8);
        this.reducedMotion = invite.getReducedMotion();
        this.canScroll = !isEmpty && voiceUsers.size() > 4;
        if (isEmpty) {
            this.binding.emptyStateText.setText(invite.getEmptyStateText());
        } else {
            int size = voiceUsers.size();
            int i5 = size <= 4 ? size : 4;
            RecyclerView voiceUsersList2 = this.binding.voiceUsersList;
            Intrinsics.checkNotNullExpressionValue(voiceUsersList2, "voiceUsersList");
            ViewGroup.LayoutParams layoutParams = voiceUsersList2.getLayoutParams();
            if (layoutParams == null) {
                throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.LayoutParams");
            }
            layoutParams.height = this.binding.voiceUsersList.getPaddingBottom() + this.binding.voiceUsersList.getPaddingTop() + (SizeUtilsKt.getDpToPx(36) * i5);
            voiceUsersList2.setLayoutParams(layoutParams);
        }
        ArrayList arrayList = new ArrayList(d0.l(voiceUsers, 10));
        Iterator<T> it = voiceUsers.iterator();
        while (it.hasNext()) {
            arrayList.add(new VoiceUserItem((VoiceUser) it.next(), invite.getStreamingLabel()));
        }
        boolean z5 = !Intrinsics.areEqual(arrayList, this.lastSubmittedList);
        this.lastSubmittedList = arrayList;
        this.voiceUserAdapter.submitList(arrayList, new z(z5, this, measureAndLayout));
        DCDButton dCDButton = this.binding.acceptButton;
        Intrinsics.checkNotNull(dCDButton);
        dCDButton.setVisibility(StringsKt.K(invite.getAcceptLabelText()) ? 8 : 0);
        dCDButton.setText(invite.getAcceptLabelText());
        dCDButton.setTextColor(invite.getAcceptLabelColor());
        dCDButton.setBackgroundColor(invite.getAcceptLabelBackgroundColor().intValue());
        dCDButton.setBorderColor(invite.getAcceptLabelBorderColor());
        dCDButton.setOnClickButtonListener(onTapAccept);
        ViewGroup.LayoutParams layoutParams2 = dCDButton.getLayoutParams();
        if (layoutParams2 == null) {
            throw new NullPointerException("null cannot be cast to non-null type android.view.ViewGroup.MarginLayoutParams");
        }
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams2;
        marginLayoutParams.topMargin = SizeUtilsKt.getDpToPx(!isEmpty ? 12 : 20);
        dCDButton.setLayoutParams(marginLayoutParams);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        startTimerIfNeeded();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        stopTimer();
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(@NotNull MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (event.getActionMasked() == 0 && isTouchOverScrollableList(event)) {
            getParent().requestDisallowInterceptTouchEvent(true);
        }
        return super.onInterceptTouchEvent(event);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public VoiceChannelListInviteView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ VoiceChannelListInviteView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public VoiceChannelListInviteView(@NotNull final Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        VoiceChannelListInviteViewBinding inflate = VoiceChannelListInviteViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        VoiceUserAdapter voiceUserAdapter = new VoiceUserAdapter();
        this.voiceUserAdapter = voiceUserAdapter;
        this.tickIntervalMs = 1000L;
        this.lastSubmittedList = m0.f13512d;
        setMaxWidth(SizeUtilsKt.getDpToPx(375));
        inflate.card.setClipToOutline(true);
        SimpleDraweeView voiceIcon = inflate.voiceIcon;
        Intrinsics.checkNotNullExpressionValue(voiceIcon, "voiceIcon");
        ReactAsset reactAsset = ReactAsset.VoiceNormalIcon;
        ReactAssetUtilsKt.setReactAsset(voiceIcon, reactAsset);
        SimpleDraweeView simpleDraweeView = inflate.privacyHintIcon;
        Intrinsics.checkNotNull(simpleDraweeView);
        ReactAssetUtilsKt.setReactAsset(simpleDraweeView, ReactAsset.EyeSlashIcon);
        ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(ThemeManagerKt.getTheme().getTextMuted()));
        TextView textView = inflate.privacyHintText;
        textView.setTextColor(ThemeManagerKt.getTheme().getTextMuted());
        Intrinsics.checkNotNull(textView);
        SetTextSizeSpKt.setTextSizeSp(textView, 14.0f);
        DiscordFont discordFont = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        TextView textView2 = inflate.channelName;
        Intrinsics.checkNotNull(textView2);
        SetTextSizeSpKt.setTextSizeSp(textView2, 16.0f);
        DiscordFont discordFont2 = DiscordFont.PrimarySemibold;
        DiscordFontUtilsKt.setDiscordFont(textView2, discordFont2);
        TextView textView3 = inflate.callTimestamp;
        textView3.setTextColor(ThemeManagerKt.getTheme().getTextFeedbackPositive());
        Intrinsics.checkNotNull(textView3);
        SetTextSizeSpKt.setTextSizeSp(textView3, 12.0f);
        DiscordFontUtilsKt.setDiscordFont(textView3, DiscordFont.CodeNormal);
        TextView textView4 = inflate.emptyStateText;
        textView4.setTextColor(ThemeManagerKt.getTheme().getTextSubtle());
        Intrinsics.checkNotNull(textView4);
        SetTextSizeSpKt.setTextSizeSp(textView4, 14.0f);
        DiscordFontUtilsKt.setDiscordFont(textView4, discordFont);
        DCDButton dCDButton = inflate.acceptButton;
        dCDButton.setTextSizeSp(15.0f);
        dCDButton.setDiscordFont(discordFont2);
        dCDButton.setCornerRadius(SizeUtilsKt.getDpToPx(24));
        dCDButton.setIcon(ReactAssetExtensionsKt.getUri(reactAsset, context), SizeUtilsKt.getDpToPx(16));
        dCDButton.setIconPadding(SizeUtilsKt.getDpToPx(8));
        RecyclerView recyclerView = inflate.voiceUsersList;
        recyclerView.setLayoutManager(new LinearLayoutManager(context, this) { // from class: com.discord.chat.presentation.message.view.VoiceChannelListInviteView$7$1
            final /* synthetic */ VoiceChannelListInviteView this$0;

            {
                this.this$0 = this;
            }

            @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
            public void onLayoutCompleted(RecyclerView.State state) {
                super.onLayoutCompleted(state);
                this.this$0.updateScrollGradient();
            }
        });
        recyclerView.setAdapter(voiceUserAdapter);
        recyclerView.setItemAnimator(null);
        recyclerView.addOnScrollListener(new RecyclerView.OnScrollListener() { // from class: com.discord.chat.presentation.message.view.VoiceChannelListInviteView$7$2
            @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
            public void onScrolled(RecyclerView recyclerView2, int dx, int dy) {
                Intrinsics.checkNotNullParameter(recyclerView2, "recyclerView");
                VoiceChannelListInviteView.this.updateScrollGradient();
            }
        });
    }
}
