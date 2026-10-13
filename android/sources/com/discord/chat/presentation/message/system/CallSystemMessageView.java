package com.discord.chat.presentation.message.system;

import android.content.Context;
import android.graphics.drawable.GradientDrawable;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.TextView;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.s0;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.bridge.Message;
import com.discord.chat.databinding.CallSystemMessageViewBinding;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.list.ChatListConstraintLayout;
import com.discord.chat.presentation.message.AddSystemMessageCardStyleKt;
import com.discord.chat.presentation.message.o;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.misc.utilities.coroutines.AttachedViewCoroutineScope;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.overlapping_circles.OverlappingCirclesView;
import com.discord.overlapping_circles.OverlappingItem;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\u0018\u00002\u00020\u0001B\u001d\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0012\u0010\u0010\u001a\u00020\u00112\b\b\u0001\u0010\u0012\u001a\u00020\tH\u0016J \u0010\u0013\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\b\b\u0002\u0010\u0018\u001a\u00020\u0019R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/discord/chat/presentation/message/system/CallSystemMessageView;", "Lcom/discord/chat/presentation/list/ChatListConstraintLayout;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "greenIconColor", "", "redIconColor", "grayIconColor", "binding", "Lcom/discord/chat/databinding/CallSystemMessageViewBinding;", "gradientDrawable", "Landroid/graphics/drawable/GradientDrawable;", "setBackgroundColor", "", ViewProps.COLOR, "setMessage", "message", "Lcom/discord/chat/bridge/Message;", "eventHandler", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "tickActiveCallDuration", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCallSystemMessageView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CallSystemMessageView.kt\ncom/discord/chat/presentation/message/system/CallSystemMessageView\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,171:1\n1563#2:172\n1634#2,3:173\n*S KotlinDebug\n*F\n+ 1 CallSystemMessageView.kt\ncom/discord/chat/presentation/message/system/CallSystemMessageView\n*L\n133#1:172\n133#1:173,3\n*E\n"})
/* loaded from: classes.dex */
public final class CallSystemMessageView extends ChatListConstraintLayout {

    @NotNull
    private final CallSystemMessageViewBinding binding;

    @NotNull
    private final GradientDrawable gradientDrawable;
    private final int grayIconColor;
    private final int greenIconColor;
    private final int redIconColor;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public CallSystemMessageView(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public static /* synthetic */ void setMessage$default(CallSystemMessageView callSystemMessageView, Message message, ChatEventHandler chatEventHandler, boolean z5, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            z5 = true;
        }
        callSystemMessageView.setMessage(message, chatEventHandler, z5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setMessage$lambda$4(ChatEventHandler chatEventHandler, Message message, View view) {
        chatEventHandler.mo493onTapCallpfaIj0E(message.m279getId3Eiw7ao(), message.m276getChannelIdo4g7jtM());
    }

    @Override // android.view.View
    public void setBackgroundColor(int color) {
        this.gradientDrawable.setColor(color);
    }

    public final void setMessage(@NotNull Message message, @NotNull ChatEventHandler eventHandler, boolean tickActiveCallDuration) {
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(eventHandler, "eventHandler");
        SimpleDraweeView icon = this.binding.icon;
        Intrinsics.checkNotNullExpressionValue(icon, "icon");
        Boolean missed = message.getMissed();
        Boolean bool = Boolean.TRUE;
        ReactAssetUtilsKt.setReactAsset(icon, Intrinsics.areEqual(missed, bool) ? ReactAsset.PhoneHangUpIcon : ReactAsset.PhoneCallIcon);
        boolean areEqual = Intrinsics.areEqual(message.isCallActive(), bool);
        SimpleDraweeView icon2 = this.binding.icon;
        Intrinsics.checkNotNullExpressionValue(icon2, "icon");
        ColorUtilsKt.setTintColor(icon2, Integer.valueOf(areEqual ? this.greenIconColor : Intrinsics.areEqual(message.getMissed(), bool) ? this.redIconColor : this.grayIconColor));
        this.binding.message.setText(message.getTitle());
        AttachedViewCoroutineScope.cancelAllWork$default(CoroutineViewUtilsKt.getAttachedScope(this), "Binding CallSystemMessageView", null, 2, null);
        Long rawMilliseconds = message.getRawMilliseconds();
        this.binding.info.setText(areEqual ? null : message.getDescription());
        if (areEqual && tickActiveCallDuration && rawMilliseconds != null) {
            x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new CallSystemMessageView$setMessage$1(this, rawMilliseconds, message, null), 3);
        }
        OverlappingCirclesView overlappingCirclesView = this.binding.participants;
        List<String> avatarURLs = message.getAvatarURLs();
        if (avatarURLs == null) {
            avatarURLs = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(avatarURLs, 10));
        Iterator<T> it = avatarURLs.iterator();
        while (it.hasNext()) {
            arrayList.add(new OverlappingItem((String) it.next()));
        }
        overlappingCirclesView.setItems(arrayList);
        final o oVar = new o(eventHandler, message);
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested(this, true, oVar);
        s0.p(this, new androidx.core.view.b() { // from class: com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$3
            @Override // androidx.core.view.b
            public void onInitializeAccessibilityNodeInfo(View host, AccessibilityNodeInfoCompat info) {
                Intrinsics.checkNotNullParameter(host, "host");
                Intrinsics.checkNotNullParameter(info, "info");
                super.onInitializeAccessibilityNodeInfo(host, info);
                Context context = CallSystemMessageView.this.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                info.w(I18nUtilsKt.i18nFormat$default(context, I18nMessage.A11Y_ROLE_BUTTON, null, 2, null));
            }

            @Override // androidx.core.view.b
            public boolean performAccessibilityAction(View host, int action, Bundle args) {
                Intrinsics.checkNotNullParameter(host, "host");
                if (action == 16) {
                    oVar.onClick(host);
                }
                return super.performAccessibilityAction(host, action, args);
            }
        });
    }

    public /* synthetic */ CallSystemMessageView(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CallSystemMessageView(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        this.greenIconColor = ThemeManagerKt.getTheme().getIconVoiceConnected();
        this.redIconColor = ThemeManagerKt.getTheme().getIconVoiceDisconnected();
        this.grayIconColor = ThemeManagerKt.getTheme().getInteractiveTextDefault();
        CallSystemMessageViewBinding inflate = CallSystemMessageViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(0);
        gradientDrawable.setCornerRadius(SizeUtilsKt.getDpToPx(8));
        this.gradientDrawable = gradientDrawable;
        AddSystemMessageCardStyleKt.addSystemMessageCardStyle(this);
        setForeground(gradientDrawable);
        TextView textView = inflate.message;
        Intrinsics.checkNotNull(textView);
        SetTextSizeSpKt.setTextSizeSp(textView, 16.0f);
        DiscordFontUtilsKt.setDiscordFont(textView, DiscordFont.PrimarySemibold);
        textView.setTextColor(ThemeManagerKt.getTheme().getMobileTextHeadingPrimary());
        TextView textView2 = inflate.info;
        Intrinsics.checkNotNull(textView2);
        SetTextSizeSpKt.setTextSizeSp(textView2, 12.0f);
        DiscordFontUtilsKt.setDiscordFont(textView2, DiscordFont.PrimaryNormal);
        textView2.setTextColor(ThemeManagerKt.getTheme().getTextMuted());
    }
}
