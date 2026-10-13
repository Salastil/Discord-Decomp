package com.discord.notifications.api;

import bs.h1;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ,2\u00020\u0001:\u0002+,B3\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\b\u0010\tBC\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\b\u0010\u000eJ\u0010\u0010\u0016\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0017\u0010\u0010J\u000b\u0010\u0018\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0005HÆ\u0003J>\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0005HÆ\u0001¢\u0006\u0004\b\u001c\u0010\u001dJ\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\u000bHÖ\u0001J\t\u0010\"\u001a\u00020\u0005HÖ\u0001J%\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020\u00002\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)H\u0001¢\u0006\u0002\b*R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u000f\u0010\u0010R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0013R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0013¨\u0006-"}, d2 = {"Lcom/discord/notifications/api/DirectReplyUser;", "", StackTraceHelper.ID_KEY, "Lcom/discord/primitives/UserId;", NotificationRenderer.USERNAME, "", "discriminator", "avatar", "<init>", "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getId-re6GcUE", "()J", "J", "getUsername", "()Ljava/lang/String;", "getDiscriminator", "getAvatar", "component1", "component1-re6GcUE", "component2", "component3", "component4", "copy", "copy-ASSxI_0", "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/notifications/api/DirectReplyUser;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_api_release", "$serializer", "Companion", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class DirectReplyUser {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String avatar;
    private final String discriminator;
    private final long id;
    private final String username;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/api/DirectReplyUser$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/api/DirectReplyUser;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return DirectReplyUser$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ DirectReplyUser(int i5, UserId userId, String str, String str2, String str3, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, userId, str, str2, str3, serializationConstructorMarker);
    }

    /* renamed from: copy-ASSxI_0$default, reason: not valid java name */
    public static /* synthetic */ DirectReplyUser m1094copyASSxI_0$default(DirectReplyUser directReplyUser, long j, String str, String str2, String str3, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = directReplyUser.id;
        }
        long j5 = j;
        if ((i5 & 2) != 0) {
            str = directReplyUser.username;
        }
        String str4 = str;
        if ((i5 & 4) != 0) {
            str2 = directReplyUser.discriminator;
        }
        String str5 = str2;
        if ((i5 & 8) != 0) {
            str3 = directReplyUser.avatar;
        }
        return directReplyUser.m1096copyASSxI_0(j5, str4, str5, str3);
    }

    public static final /* synthetic */ void write$Self$notification_api_release(DirectReplyUser self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.id));
        if (output.I(serialDesc, 1) || self.username != null) {
            output.z(serialDesc, 1, v1.a, self.username);
        }
        if (output.I(serialDesc, 2) || self.discriminator != null) {
            output.z(serialDesc, 2, v1.a, self.discriminator);
        }
        if (!output.I(serialDesc, 3) && self.avatar == null) {
            return;
        }
        output.z(serialDesc, 3, v1.a, self.avatar);
    }

    /* renamed from: component1-re6GcUE, reason: not valid java name and from getter */
    public final long getId() {
        return this.id;
    }

    /* renamed from: component2, reason: from getter */
    public final String getUsername() {
        return this.username;
    }

    /* renamed from: component3, reason: from getter */
    public final String getDiscriminator() {
        return this.discriminator;
    }

    /* renamed from: component4, reason: from getter */
    public final String getAvatar() {
        return this.avatar;
    }

    @NotNull
    /* renamed from: copy-ASSxI_0, reason: not valid java name */
    public final DirectReplyUser m1096copyASSxI_0(long id2, String username, String discriminator, String avatar) {
        return new DirectReplyUser(id2, username, discriminator, avatar, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof DirectReplyUser)) {
            return false;
        }
        DirectReplyUser directReplyUser = (DirectReplyUser) other;
        return UserId.m1245equalsimpl0(this.id, directReplyUser.id) && Intrinsics.areEqual(this.username, directReplyUser.username) && Intrinsics.areEqual(this.discriminator, directReplyUser.discriminator) && Intrinsics.areEqual(this.avatar, directReplyUser.avatar);
    }

    public final String getAvatar() {
        return this.avatar;
    }

    public final String getDiscriminator() {
        return this.discriminator;
    }

    /* renamed from: getId-re6GcUE, reason: not valid java name */
    public final long m1097getIdre6GcUE() {
        return this.id;
    }

    public final String getUsername() {
        return this.username;
    }

    public int hashCode() {
        int m1246hashCodeimpl = UserId.m1246hashCodeimpl(this.id) * 31;
        String str = this.username;
        int hashCode = (m1246hashCodeimpl + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.discriminator;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.avatar;
        return hashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String m1248toStringimpl = UserId.m1248toStringimpl(this.id);
        String str = this.username;
        return a.k(a3.e.t("DirectReplyUser(id=", m1248toStringimpl, ", username=", str, ", discriminator="), this.discriminator, ", avatar=", this.avatar, ")");
    }

    public /* synthetic */ DirectReplyUser(long j, String str, String str2, String str3, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, str2, str3);
    }

    private /* synthetic */ DirectReplyUser(int i5, UserId userId, String str, String str2, String str3, SerializationConstructorMarker serializationConstructorMarker) {
        if (1 != (i5 & 1)) {
            h1.l(i5, 1, DirectReplyUser$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = userId.m1250unboximpl();
        if ((i5 & 2) == 0) {
            this.username = null;
        } else {
            this.username = str;
        }
        if ((i5 & 4) == 0) {
            this.discriminator = null;
        } else {
            this.discriminator = str2;
        }
        if ((i5 & 8) == 0) {
            this.avatar = null;
        } else {
            this.avatar = str3;
        }
    }

    private DirectReplyUser(long j, String str, String str2, String str3) {
        this.id = j;
        this.username = str;
        this.discriminator = str2;
        this.avatar = str3;
    }

    public /* synthetic */ DirectReplyUser(long j, String str, String str2, String str3, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, (i5 & 2) != 0 ? null : str, (i5 & 4) != 0 ? null : str2, (i5 & 8) != 0 ? null : str3, null);
    }
}
