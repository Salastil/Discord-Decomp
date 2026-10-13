package com.discord.chat.bridge.embed;

import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import fo.l;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 '2\u00020\u0001:\u0002&'B+\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0006\u0010\u0007B9\b\u0010\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0006\u0010\fJ\u000b\u0010\u0015\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0016\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J-\u0010\u0018\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001c\u001a\u00020\tHÖ\u0001J\t\u0010\u001d\u001a\u00020\u0003HÖ\u0001J%\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0001¢\u0006\u0002\b%R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000eR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000eR\u001d\u0010\u0011\u001a\u0004\u0018\u00010\u00038FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u0013\u0010\u0014\u001a\u0004\b\u0012\u0010\u000e¨\u0006("}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedFooter;", "", "iconURL", "", "iconProxyURL", "content", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getIconURL", "()Ljava/lang/String;", "getIconProxyURL", "getContent", "imageUrl", "getImageUrl", "imageUrl$delegate", "Lkotlin/Lazy;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EmbedFooter {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String content;
    private final String iconProxyURL;
    private final String iconURL;

    /* renamed from: imageUrl$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy imageUrl;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedFooter$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/embed/EmbedFooter;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return EmbedFooter$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public EmbedFooter() {
        this((String) null, (String) null, (String) null, 7, (DefaultConstructorMarker) null);
    }

    public static /* synthetic */ EmbedFooter copy$default(EmbedFooter embedFooter, String str, String str2, String str3, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = embedFooter.iconURL;
        }
        if ((i5 & 2) != 0) {
            str2 = embedFooter.iconProxyURL;
        }
        if ((i5 & 4) != 0) {
            str3 = embedFooter.content;
        }
        return embedFooter.copy(str, str2, str3);
    }

    public static final /* synthetic */ void write$Self$chat_release(EmbedFooter self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.iconURL != null) {
            output.z(serialDesc, 0, v1.a, self.iconURL);
        }
        if (output.I(serialDesc, 1) || self.iconProxyURL != null) {
            output.z(serialDesc, 1, v1.a, self.iconProxyURL);
        }
        if (!output.I(serialDesc, 2) && self.content == null) {
            return;
        }
        output.z(serialDesc, 2, v1.a, self.content);
    }

    /* renamed from: component1, reason: from getter */
    public final String getIconURL() {
        return this.iconURL;
    }

    /* renamed from: component2, reason: from getter */
    public final String getIconProxyURL() {
        return this.iconProxyURL;
    }

    /* renamed from: component3, reason: from getter */
    public final String getContent() {
        return this.content;
    }

    @NotNull
    public final EmbedFooter copy(String iconURL, String iconProxyURL, String content) {
        return new EmbedFooter(iconURL, iconProxyURL, content);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EmbedFooter)) {
            return false;
        }
        EmbedFooter embedFooter = (EmbedFooter) other;
        return Intrinsics.areEqual(this.iconURL, embedFooter.iconURL) && Intrinsics.areEqual(this.iconProxyURL, embedFooter.iconProxyURL) && Intrinsics.areEqual(this.content, embedFooter.content);
    }

    public final String getContent() {
        return this.content;
    }

    public final String getIconProxyURL() {
        return this.iconProxyURL;
    }

    public final String getIconURL() {
        return this.iconURL;
    }

    public final String getImageUrl() {
        return (String) this.imageUrl.getValue();
    }

    public int hashCode() {
        String str = this.iconURL;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.iconProxyURL;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.content;
        return hashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.iconURL;
        String str2 = this.iconProxyURL;
        return com.discord.chat.bridge.botuikit.a.j(a3.e.t("EmbedFooter(iconURL=", str, ", iconProxyURL=", str2, ", content="), this.content, ")");
    }

    public /* synthetic */ EmbedFooter(int i5, String str, String str2, String str3, SerializationConstructorMarker serializationConstructorMarker) {
        if ((i5 & 1) == 0) {
            this.iconURL = null;
        } else {
            this.iconURL = str;
        }
        if ((i5 & 2) == 0) {
            this.iconProxyURL = null;
        } else {
            this.iconProxyURL = str2;
        }
        if ((i5 & 4) == 0) {
            this.content = null;
        } else {
            this.content = str3;
        }
        final int i6 = 0;
        this.imageUrl = l.a(new Function0(this) { // from class: com.discord.chat.bridge.embed.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ EmbedFooter f3858e;

            {
                this.f3858e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                String str4;
                String str5;
                switch (i6) {
                    case 0:
                        str4 = this.f3858e.iconProxyURL;
                        return str4;
                    default:
                        str5 = this.f3858e.iconProxyURL;
                        return str5;
                }
            }
        });
    }

    public EmbedFooter(String str, String str2, String str3) {
        this.iconURL = str;
        this.iconProxyURL = str2;
        this.content = str3;
        final int i5 = 1;
        this.imageUrl = l.a(new Function0(this) { // from class: com.discord.chat.bridge.embed.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ EmbedFooter f3858e;

            {
                this.f3858e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                String str4;
                String str5;
                switch (i5) {
                    case 0:
                        str4 = this.f3858e.iconProxyURL;
                        return str4;
                    default:
                        str5 = this.f3858e.iconProxyURL;
                        return str5;
                }
            }
        });
    }

    public /* synthetic */ EmbedFooter(String str, String str2, String str3, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : str3);
    }
}
