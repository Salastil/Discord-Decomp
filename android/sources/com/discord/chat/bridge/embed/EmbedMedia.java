package com.discord.chat.bridge.embed;

import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u001b\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 :2\u00020\u0001:\u00029:BW\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0006\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\r\u0010\u000eBo\b\u0010\u0012\u0006\u0010\u000f\u001a\u00020\u0006\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0006\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012¢\u0006\u0004\b\r\u0010\u0013J\t\u0010\"\u001a\u00020\u0003HÆ\u0003J\u000b\u0010#\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010$\u001a\u00020\u0006HÆ\u0003J\t\u0010%\u001a\u00020\u0006HÆ\u0003J\u000b\u0010&\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010'\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u001cJ\t\u0010(\u001a\u00020\u000bHÆ\u0003J\u000b\u0010)\u001a\u0004\u0018\u00010\u0003HÆ\u0003Jf\u0010*\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00062\b\b\u0002\u0010\n\u001a\u00020\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u0010+J\u0013\u0010,\u001a\u00020\u000b2\b\u0010-\u001a\u0004\u0018\u00010.HÖ\u0003J\t\u0010/\u001a\u00020\u0006HÖ\u0001J\t\u00100\u001a\u00020\u0003HÖ\u0001J%\u00101\u001a\u0002022\u0006\u00103\u001a\u00020\u00002\u0006\u00104\u001a\u0002052\u0006\u00106\u001a\u000207H\u0001¢\u0006\u0002\b8R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0015R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0018R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0015R\u0015\u0010\t\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u001d\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0013\u0010\f\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u0015R\u0014\u0010\u0010\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u0015¨\u0006;"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedMedia;", "Lcom/discord/chat/bridge/embed/EmbedUrlProvider;", "url", "", "proxyURL", "width", "", "height", "placeholder", "placeholderVersion", "srcIsAnimated", "", "contentType", "<init>", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;Ljava/lang/Integer;ZLjava/lang/String;)V", "seen0", "embedUrl", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;IILjava/lang/String;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getUrl", "()Ljava/lang/String;", "getProxyURL", "getWidth", "()I", "getHeight", "getPlaceholder", "getPlaceholderVersion", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getSrcIsAnimated", "()Z", "getContentType", "getEmbedUrl", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;Ljava/lang/Integer;ZLjava/lang/String;)Lcom/discord/chat/bridge/embed/EmbedMedia;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EmbedMedia implements EmbedUrlProvider {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String contentType;

    @NotNull
    private final String embedUrl;
    private final int height;
    private final String placeholder;
    private final Integer placeholderVersion;
    private final String proxyURL;
    private final boolean srcIsAnimated;

    @NotNull
    private final String url;
    private final int width;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedMedia$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/embed/EmbedMedia;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return EmbedMedia$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ EmbedMedia(int i5, String str, String str2, int i6, int i10, String str3, Integer num, boolean z5, String str4, String str5, SerializationConstructorMarker serializationConstructorMarker) {
        if (77 != (i5 & 77)) {
            h1.l(i5, 77, EmbedMedia$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.url = str;
        if ((i5 & 2) == 0) {
            this.proxyURL = null;
        } else {
            this.proxyURL = str2;
        }
        this.width = i6;
        this.height = i10;
        if ((i5 & 16) == 0) {
            this.placeholder = null;
        } else {
            this.placeholder = str3;
        }
        if ((i5 & 32) == 0) {
            this.placeholderVersion = null;
        } else {
            this.placeholderVersion = num;
        }
        this.srcIsAnimated = z5;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.contentType = null;
        } else {
            this.contentType = str4;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            this.embedUrl = str5;
        } else {
            String str6 = this.proxyURL;
            this.embedUrl = str6 != null ? str6 : str;
        }
    }

    public static /* synthetic */ EmbedMedia copy$default(EmbedMedia embedMedia, String str, String str2, int i5, int i6, String str3, Integer num, boolean z5, String str4, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            str = embedMedia.url;
        }
        if ((i10 & 2) != 0) {
            str2 = embedMedia.proxyURL;
        }
        if ((i10 & 4) != 0) {
            i5 = embedMedia.width;
        }
        if ((i10 & 8) != 0) {
            i6 = embedMedia.height;
        }
        if ((i10 & 16) != 0) {
            str3 = embedMedia.placeholder;
        }
        if ((i10 & 32) != 0) {
            num = embedMedia.placeholderVersion;
        }
        if ((i10 & 64) != 0) {
            z5 = embedMedia.srcIsAnimated;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            str4 = embedMedia.contentType;
        }
        boolean z6 = z5;
        String str5 = str4;
        String str6 = str3;
        Integer num2 = num;
        return embedMedia.copy(str, str2, i5, i6, str6, num2, z6, str5);
    }

    public static final /* synthetic */ void write$Self$chat_release(EmbedMedia self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.url);
        if (output.I(serialDesc, 1) || self.proxyURL != null) {
            output.z(serialDesc, 1, v1.a, self.proxyURL);
        }
        output.n(2, self.width, serialDesc);
        output.n(3, self.height, serialDesc);
        if (output.I(serialDesc, 4) || self.placeholder != null) {
            output.z(serialDesc, 4, v1.a, self.placeholder);
        }
        if (output.I(serialDesc, 5) || self.placeholderVersion != null) {
            output.z(serialDesc, 5, o0.a, self.placeholderVersion);
        }
        output.x(serialDesc, 6, self.srcIsAnimated);
        if (output.I(serialDesc, 7) || self.contentType != null) {
            output.z(serialDesc, 7, v1.a, self.contentType);
        }
        if (!output.I(serialDesc, 8)) {
            String embedUrl = self.getEmbedUrl();
            String str = self.proxyURL;
            if (str == null) {
                str = self.url;
            }
            if (Intrinsics.areEqual(embedUrl, str)) {
                return;
            }
        }
        output.y(serialDesc, 8, self.getEmbedUrl());
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* renamed from: component2, reason: from getter */
    public final String getProxyURL() {
        return this.proxyURL;
    }

    /* renamed from: component3, reason: from getter */
    public final int getWidth() {
        return this.width;
    }

    /* renamed from: component4, reason: from getter */
    public final int getHeight() {
        return this.height;
    }

    /* renamed from: component5, reason: from getter */
    public final String getPlaceholder() {
        return this.placeholder;
    }

    /* renamed from: component6, reason: from getter */
    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    /* renamed from: component8, reason: from getter */
    public final String getContentType() {
        return this.contentType;
    }

    @NotNull
    public final EmbedMedia copy(@NotNull String url, String proxyURL, int width, int height, String placeholder, Integer placeholderVersion, boolean srcIsAnimated, String contentType) {
        Intrinsics.checkNotNullParameter(url, "url");
        return new EmbedMedia(url, proxyURL, width, height, placeholder, placeholderVersion, srcIsAnimated, contentType);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EmbedMedia)) {
            return false;
        }
        EmbedMedia embedMedia = (EmbedMedia) other;
        return Intrinsics.areEqual(this.url, embedMedia.url) && Intrinsics.areEqual(this.proxyURL, embedMedia.proxyURL) && this.width == embedMedia.width && this.height == embedMedia.height && Intrinsics.areEqual(this.placeholder, embedMedia.placeholder) && Intrinsics.areEqual(this.placeholderVersion, embedMedia.placeholderVersion) && this.srcIsAnimated == embedMedia.srcIsAnimated && Intrinsics.areEqual(this.contentType, embedMedia.contentType);
    }

    public final String getContentType() {
        return this.contentType;
    }

    @Override // com.discord.chat.bridge.embed.EmbedUrlProvider
    @NotNull
    public String getEmbedUrl() {
        return this.embedUrl;
    }

    public final int getHeight() {
        return this.height;
    }

    public final String getPlaceholder() {
        return this.placeholder;
    }

    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    public final String getProxyURL() {
        return this.proxyURL;
    }

    public final boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    @NotNull
    public final String getUrl() {
        return this.url;
    }

    public final int getWidth() {
        return this.width;
    }

    public int hashCode() {
        int hashCode = this.url.hashCode() * 31;
        String str = this.proxyURL;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.height, com.discord.chat.bridge.botuikit.a.u(this.width, (hashCode + (str == null ? 0 : str.hashCode())) * 31, 31), 31);
        String str2 = this.placeholder;
        int hashCode2 = (u5 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num = this.placeholderVersion;
        int d6 = d.d((hashCode2 + (num == null ? 0 : num.hashCode())) * 31, 31, this.srcIsAnimated);
        String str3 = this.contentType;
        return d6 + (str3 != null ? str3.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.url;
        String str2 = this.proxyURL;
        int i5 = this.width;
        int i6 = this.height;
        String str3 = this.placeholder;
        Integer num = this.placeholderVersion;
        boolean z5 = this.srcIsAnimated;
        String str4 = this.contentType;
        StringBuilder t5 = a3.e.t("EmbedMedia(url=", str, ", proxyURL=", str2, ", width=");
        a3.e.y(t5, i5, ", height=", i6, ", placeholder=");
        com.discord.chat.bridge.botuikit.a.r(num, str3, ", placeholderVersion=", ", srcIsAnimated=", t5);
        t5.append(z5);
        t5.append(", contentType=");
        t5.append(str4);
        t5.append(")");
        return t5.toString();
    }

    public EmbedMedia(@NotNull String url, String str, int i5, int i6, String str2, Integer num, boolean z5, String str3) {
        Intrinsics.checkNotNullParameter(url, "url");
        this.url = url;
        this.proxyURL = str;
        this.width = i5;
        this.height = i6;
        this.placeholder = str2;
        this.placeholderVersion = num;
        this.srcIsAnimated = z5;
        this.contentType = str3;
        this.embedUrl = str != null ? str : url;
    }

    public /* synthetic */ EmbedMedia(String str, String str2, int i5, int i6, String str3, Integer num, boolean z5, String str4, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i10 & 2) != 0 ? null : str2, i5, i6, (i10 & 16) != 0 ? null : str3, (i10 & 32) != 0 ? null : num, z5, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : str4);
    }
}
