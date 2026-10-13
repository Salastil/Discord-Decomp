package com.discord.chat.presentation.message;

import android.content.Context;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import bs.v1;
import com.discord.chat.databinding.MessageFrameFeedHeaderBinding;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.jank_stats.JankRecordStore;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.misc.utilities.view.ViewUtilsKt;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.overlapping_circles.OverlappingCirclesView;
import com.discord.overlapping_circles.OverlappingItem;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.view.SimpleDraweeView;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001:\u0001\u0012B'\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0018\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/discord/chat/presentation/message/MessageFrameFeedHeaderView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "binding", "Lcom/discord/chat/databinding/MessageFrameFeedHeaderBinding;", "configure", "", "messageFrame", "Lcom/discord/chat/presentation/message/MessageFrameFeedHeaderView$MessageBundleHeader;", "onOverflowClick", "Landroid/view/View$OnClickListener;", "MessageBundleHeader", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMessageFrameFeedHeaderView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MessageFrameFeedHeaderView.kt\ncom/discord/chat/presentation/message/MessageFrameFeedHeaderView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,88:1\n257#2,2:89\n257#2,2:95\n1563#3:91\n1634#3,3:92\n*S KotlinDebug\n*F\n+ 1 MessageFrameFeedHeaderView.kt\ncom/discord/chat/presentation/message/MessageFrameFeedHeaderView\n*L\n58#1:89,2\n84#1:95,2\n81#1:91\n81#1:92,3\n*E\n"})
/* loaded from: classes.dex */
public final class MessageFrameFeedHeaderView extends ConstraintLayout {

    @NotNull
    private final MessageFrameFeedHeaderBinding binding;

    @xr.e
    @Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 )2\u00020\u0001:\u0002()BI\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u001c\b\u0002\u0010\u0005\u001a\u0016\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0006j\n\u0012\u0004\u0012\u00020\u0003\u0018\u0001`\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\t\u0010\nBI\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0005\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0006\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\t\u0010\u000fJ\u000b\u0010\u0016\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u001d\u0010\u0018\u001a\u0016\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0006j\n\u0012\u0004\u0012\u00020\u0003\u0018\u0001`\u0007HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003JK\u0010\u001a\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\u001c\b\u0002\u0010\u0005\u001a\u0016\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0006j\n\u0012\u0004\u0012\u00020\u0003\u0018\u0001`\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001e\u001a\u00020\fHÖ\u0001J\t\u0010\u001f\u001a\u00020\u0003HÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R%\u0010\u0005\u001a\u0016\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0006j\n\u0012\u0004\u0012\u00020\u0003\u0018\u0001`\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0011¨\u0006*"}, d2 = {"Lcom/discord/chat/presentation/message/MessageFrameFeedHeaderView$MessageBundleHeader;", "", "channelIconURL", "", "chatIconURL", "avatarURLs", "Ljava/util/ArrayList;", "Lkotlin/collections/ArrayList;", NotificationRenderer.CHANNEL_NAME, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getChannelIconURL", "()Ljava/lang/String;", "getChatIconURL", "getAvatarURLs", "()Ljava/util/ArrayList;", "getChannelName", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class MessageBundleHeader {
        private final ArrayList<String> avatarURLs;
        private final String channelIconURL;
        private final String channelName;
        private final String chatIconURL;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private static final Lazy[] $childSerializers = {null, null, fo.l.b(fo.m.f8827e, new com.discord.chat.presentation.list.a(10)), null};

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/presentation/message/MessageFrameFeedHeaderView$MessageBundleHeader$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/presentation/message/MessageFrameFeedHeaderView$MessageBundleHeader;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return MessageFrameFeedHeaderView$MessageBundleHeader$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        public MessageBundleHeader() {
            this((String) null, (String) null, (ArrayList) null, (String) null, 15, (DefaultConstructorMarker) null);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
            return new bs.d(v1.a, 0);
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ MessageBundleHeader copy$default(MessageBundleHeader messageBundleHeader, String str, String str2, ArrayList arrayList, String str3, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = messageBundleHeader.channelIconURL;
            }
            if ((i5 & 2) != 0) {
                str2 = messageBundleHeader.chatIconURL;
            }
            if ((i5 & 4) != 0) {
                arrayList = messageBundleHeader.avatarURLs;
            }
            if ((i5 & 8) != 0) {
                str3 = messageBundleHeader.channelName;
            }
            return messageBundleHeader.copy(str, str2, arrayList, str3);
        }

        public static final /* synthetic */ void write$Self$chat_release(MessageBundleHeader self, CompositeEncoder output, SerialDescriptor serialDesc) {
            Lazy[] lazyArr = $childSerializers;
            if (output.I(serialDesc, 0) || self.channelIconURL != null) {
                output.z(serialDesc, 0, v1.a, self.channelIconURL);
            }
            if (output.I(serialDesc, 1) || self.chatIconURL != null) {
                output.z(serialDesc, 1, v1.a, self.chatIconURL);
            }
            if (output.I(serialDesc, 2) || self.avatarURLs != null) {
                output.z(serialDesc, 2, (KSerializer) lazyArr[2].getValue(), self.avatarURLs);
            }
            if (!output.I(serialDesc, 3) && self.channelName == null) {
                return;
            }
            output.z(serialDesc, 3, v1.a, self.channelName);
        }

        /* renamed from: component1, reason: from getter */
        public final String getChannelIconURL() {
            return this.channelIconURL;
        }

        /* renamed from: component2, reason: from getter */
        public final String getChatIconURL() {
            return this.chatIconURL;
        }

        public final ArrayList<String> component3() {
            return this.avatarURLs;
        }

        /* renamed from: component4, reason: from getter */
        public final String getChannelName() {
            return this.channelName;
        }

        @NotNull
        public final MessageBundleHeader copy(String channelIconURL, String chatIconURL, ArrayList<String> avatarURLs, String channelName) {
            return new MessageBundleHeader(channelIconURL, chatIconURL, avatarURLs, channelName);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof MessageBundleHeader)) {
                return false;
            }
            MessageBundleHeader messageBundleHeader = (MessageBundleHeader) other;
            return Intrinsics.areEqual(this.channelIconURL, messageBundleHeader.channelIconURL) && Intrinsics.areEqual(this.chatIconURL, messageBundleHeader.chatIconURL) && Intrinsics.areEqual(this.avatarURLs, messageBundleHeader.avatarURLs) && Intrinsics.areEqual(this.channelName, messageBundleHeader.channelName);
        }

        public final ArrayList<String> getAvatarURLs() {
            return this.avatarURLs;
        }

        public final String getChannelIconURL() {
            return this.channelIconURL;
        }

        public final String getChannelName() {
            return this.channelName;
        }

        public final String getChatIconURL() {
            return this.chatIconURL;
        }

        public int hashCode() {
            String str = this.channelIconURL;
            int hashCode = (str == null ? 0 : str.hashCode()) * 31;
            String str2 = this.chatIconURL;
            int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
            ArrayList<String> arrayList = this.avatarURLs;
            int hashCode3 = (hashCode2 + (arrayList == null ? 0 : arrayList.hashCode())) * 31;
            String str3 = this.channelName;
            return hashCode3 + (str3 != null ? str3.hashCode() : 0);
        }

        @NotNull
        public String toString() {
            String str = this.channelIconURL;
            String str2 = this.chatIconURL;
            ArrayList<String> arrayList = this.avatarURLs;
            String str3 = this.channelName;
            StringBuilder t5 = a3.e.t("MessageBundleHeader(channelIconURL=", str, ", chatIconURL=", str2, ", avatarURLs=");
            t5.append(arrayList);
            t5.append(", channelName=");
            t5.append(str3);
            t5.append(")");
            return t5.toString();
        }

        public /* synthetic */ MessageBundleHeader(int i5, String str, String str2, ArrayList arrayList, String str3, SerializationConstructorMarker serializationConstructorMarker) {
            if ((i5 & 1) == 0) {
                this.channelIconURL = null;
            } else {
                this.channelIconURL = str;
            }
            if ((i5 & 2) == 0) {
                this.chatIconURL = null;
            } else {
                this.chatIconURL = str2;
            }
            if ((i5 & 4) == 0) {
                this.avatarURLs = null;
            } else {
                this.avatarURLs = arrayList;
            }
            if ((i5 & 8) == 0) {
                this.channelName = null;
            } else {
                this.channelName = str3;
            }
        }

        public MessageBundleHeader(String str, String str2, ArrayList<String> arrayList, String str3) {
            this.channelIconURL = str;
            this.chatIconURL = str2;
            this.avatarURLs = arrayList;
            this.channelName = str3;
        }

        public /* synthetic */ MessageBundleHeader(String str, String str2, ArrayList arrayList, String str3, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : arrayList, (i5 & 8) != 0 ? null : str3);
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public MessageFrameFeedHeaderView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public final void configure(@NotNull MessageBundleHeader messageFrame, View.OnClickListener onOverflowClick) {
        List f02;
        Intrinsics.checkNotNullParameter(messageFrame, "messageFrame");
        TextView textView = this.binding.feedChannelText;
        Intrinsics.checkNotNull(textView);
        ViewUtilsKt.setOptionalText(textView, messageFrame.getChannelName());
        textView.setVisibility(messageFrame.getChannelIconURL() != null ? 0 : 8);
        SimpleDraweeView feedChannelIcon = this.binding.feedChannelIcon;
        Intrinsics.checkNotNullExpressionValue(feedChannelIcon, "feedChannelIcon");
        ReactAssetUtilsKt.setOptionalReactImageUrl(feedChannelIcon, messageFrame.getChannelIconURL());
        SimpleDraweeView simpleDraweeView = this.binding.feedReplyIcon;
        Intrinsics.checkNotNull(simpleDraweeView);
        ReactAssetUtilsKt.setOptionalReactImageUrl(simpleDraweeView, messageFrame.getChatIconURL());
        List<OverlappingItem> list = null;
        NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(simpleDraweeView, false, onOverflowClick, 1, null);
        ArrayList<String> avatarURLs = messageFrame.getAvatarURLs();
        int size = avatarURLs != null ? avatarURLs.size() : 0;
        TextView feedReplyCount = this.binding.feedReplyCount;
        Intrinsics.checkNotNullExpressionValue(feedReplyCount, "feedReplyCount");
        ViewUtilsKt.setOptionalText(feedReplyCount, size > 3 ? "3+" : size > 0 ? String.valueOf(size) : null);
        OverlappingCirclesView overlappingCirclesView = this.binding.feedReplyParticipants;
        ArrayList<String> avatarURLs2 = messageFrame.getAvatarURLs();
        if (avatarURLs2 != null && (f02 = CollectionsKt.f0(avatarURLs2, 3)) != null) {
            list = new ArrayList<>(d0.l(f02, 10));
            Iterator it = f02.iterator();
            while (it.hasNext()) {
                list.add(new OverlappingItem((String) it.next()));
            }
        }
        if (list == null) {
            list = m0.f13512d;
        }
        overlappingCirclesView.setItems(list);
        Intrinsics.checkNotNull(overlappingCirclesView);
        overlappingCirclesView.setVisibility(size > 0 ? 0 : 8);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public MessageFrameFeedHeaderView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ MessageFrameFeedHeaderView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MessageFrameFeedHeaderView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        MessageFrameFeedHeaderBinding inflate = MessageFrameFeedHeaderBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        TextView textView = inflate.feedChannelText;
        textView.setTextColor(ThemeManagerKt.getTheme().getTextDefault());
        Intrinsics.checkNotNull(textView);
        DiscordFont discordFont = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        TextView textView2 = inflate.feedReplyCount;
        textView2.setTextColor(ThemeManagerKt.getTheme().getTextDefault());
        Intrinsics.checkNotNull(textView2);
        DiscordFontUtilsKt.setDiscordFont(textView2, discordFont);
        SimpleDraweeView feedChannelIcon = inflate.feedChannelIcon;
        Intrinsics.checkNotNullExpressionValue(feedChannelIcon, "feedChannelIcon");
        ColorUtilsKt.setTintColor(feedChannelIcon, Integer.valueOf(ThemeManagerKt.getTheme().getInteractiveTextDefault()));
        SimpleDraweeView feedReplyIcon = inflate.feedReplyIcon;
        Intrinsics.checkNotNullExpressionValue(feedReplyIcon, "feedReplyIcon");
        ColorUtilsKt.setTintColor(feedReplyIcon, Integer.valueOf(ThemeManagerKt.getTheme().getTextDefault()));
        setPadding(SizeUtilsKt.getDpToPx(12), SizeUtilsKt.getDpToPx(8), SizeUtilsKt.getDpToPx(12), SizeUtilsKt.getDpToPx(12));
    }
}
