package com.discord.chat.bridge.embed;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 *2\u00020\u0001:\u0002)*B3\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bBC\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0018\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0003HÆ\u0003J7\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020\nHÖ\u0001J\t\u0010 \u001a\u00020\u0003HÖ\u0001J%\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u00002\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0001¢\u0006\u0002\b(R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u001d\u0010\u0013\u001a\u0004\u0018\u00010\u00038FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u0015\u0010\u0016\u001a\u0004\b\u0014\u0010\u000f¨\u0006+"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedAuthor;", "", StackTraceHelper.NAME_KEY, "", "url", "iconURL", "iconProxyURL", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getName", "()Ljava/lang/String;", "getUrl", "getIconURL", "getIconProxyURL", "imageUrl", "getImageUrl", "imageUrl$delegate", "Lkotlin/Lazy;", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class EmbedAuthor {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String iconProxyURL;
    private final String iconURL;

    /* renamed from: imageUrl$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy imageUrl;

    @NotNull
    private final String name;
    private final String url;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedAuthor$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/embed/EmbedAuthor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return EmbedAuthor$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ EmbedAuthor(int i5, String str, String str2, String str3, String str4, SerializationConstructorMarker serializationConstructorMarker) {
        if (1 != (i5 & 1)) {
            h1.l(i5, 1, EmbedAuthor$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.name = str;
        if ((i5 & 2) == 0) {
            this.url = null;
        } else {
            this.url = str2;
        }
        if ((i5 & 4) == 0) {
            this.iconURL = null;
        } else {
            this.iconURL = str3;
        }
        if ((i5 & 8) == 0) {
            this.iconProxyURL = null;
        } else {
            this.iconProxyURL = str4;
        }
        final int i6 = 0;
        this.imageUrl = l.a(new Function0(this) { // from class: com.discord.chat.bridge.embed.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ EmbedAuthor f3856e;

            {
                this.f3856e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                String str5;
                String str6;
                switch (i6) {
                    case 0:
                        str5 = this.f3856e.iconProxyURL;
                        return str5;
                    default:
                        str6 = this.f3856e.iconProxyURL;
                        return str6;
                }
            }
        });
    }

    public static /* synthetic */ EmbedAuthor copy$default(EmbedAuthor embedAuthor, String str, String str2, String str3, String str4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = embedAuthor.name;
        }
        if ((i5 & 2) != 0) {
            str2 = embedAuthor.url;
        }
        if ((i5 & 4) != 0) {
            str3 = embedAuthor.iconURL;
        }
        if ((i5 & 8) != 0) {
            str4 = embedAuthor.iconProxyURL;
        }
        return embedAuthor.copy(str, str2, str3, str4);
    }

    public static final /* synthetic */ void write$Self$chat_release(EmbedAuthor self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.name);
        if (output.I(serialDesc, 1) || self.url != null) {
            output.z(serialDesc, 1, v1.a, self.url);
        }
        if (output.I(serialDesc, 2) || self.iconURL != null) {
            output.z(serialDesc, 2, v1.a, self.iconURL);
        }
        if (!output.I(serialDesc, 3) && self.iconProxyURL == null) {
            return;
        }
        output.z(serialDesc, 3, v1.a, self.iconProxyURL);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* renamed from: component2, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* renamed from: component3, reason: from getter */
    public final String getIconURL() {
        return this.iconURL;
    }

    /* renamed from: component4, reason: from getter */
    public final String getIconProxyURL() {
        return this.iconProxyURL;
    }

    @NotNull
    public final EmbedAuthor copy(@NotNull String name, String url, String iconURL, String iconProxyURL) {
        Intrinsics.checkNotNullParameter(name, "name");
        return new EmbedAuthor(name, url, iconURL, iconProxyURL);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof EmbedAuthor)) {
            return false;
        }
        EmbedAuthor embedAuthor = (EmbedAuthor) other;
        return Intrinsics.areEqual(this.name, embedAuthor.name) && Intrinsics.areEqual(this.url, embedAuthor.url) && Intrinsics.areEqual(this.iconURL, embedAuthor.iconURL) && Intrinsics.areEqual(this.iconProxyURL, embedAuthor.iconProxyURL);
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

    @NotNull
    public final String getName() {
        return this.name;
    }

    public final String getUrl() {
        return this.url;
    }

    public int hashCode() {
        int hashCode = this.name.hashCode() * 31;
        String str = this.url;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.iconURL;
        int hashCode3 = (hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.iconProxyURL;
        return hashCode3 + (str3 != null ? str3.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.name;
        String str2 = this.url;
        return com.discord.chat.bridge.botuikit.a.k(a3.e.t("EmbedAuthor(name=", str, ", url=", str2, ", iconURL="), this.iconURL, ", iconProxyURL=", this.iconProxyURL, ")");
    }

    public EmbedAuthor(@NotNull String name, String str, String str2, String str3) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.name = name;
        this.url = str;
        this.iconURL = str2;
        this.iconProxyURL = str3;
        final int i5 = 1;
        this.imageUrl = l.a(new Function0(this) { // from class: com.discord.chat.bridge.embed.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ EmbedAuthor f3856e;

            {
                this.f3856e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                String str5;
                String str6;
                switch (i5) {
                    case 0:
                        str5 = this.f3856e.iconProxyURL;
                        return str5;
                    default:
                        str6 = this.f3856e.iconProxyURL;
                        return str6;
                }
            }
        });
    }

    public /* synthetic */ EmbedAuthor(String str, String str2, String str3, String str4, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : str4);
    }
}
