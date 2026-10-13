package com.discord.user_search_worker;

import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.devsupport.StackTraceHelper;
import cs.g;
import cs.h;
import java.util.ArrayList;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e(with = Serializer.class)
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010$\n\u0002\b\u0017\n\u0002\u0010\b\n\u0002\b\u0004\b\u0081\b\u0018\u0000 &2\u00020\u0001:\u0002%&B]\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\u0014\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u000b¢\u0006\u0004\b\f\u0010\rJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u0011J\u0010\u0010\u001a\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u0011J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0017\u0010\u001d\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u000bHÆ\u0003Jj\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\u0016\b\u0002\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u000bHÆ\u0001¢\u0006\u0002\u0010\u001fJ\u0013\u0010 \u001a\u00020\u00062\b\u0010!\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\"\u001a\u00020#HÖ\u0001J\t\u0010$\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0005\u0010\u0011R\u0015\u0010\u0007\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0007\u0010\u0011R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u000fR\u0013\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u000fR\u001f\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016¨\u0006'"}, d2 = {"Lcom/discord/user_search_worker/UserSearchTransformedUser;", "", StackTraceHelper.ID_KEY, "", NotificationRenderer.USERNAME, "isBot", "", "isFriend", "friendNickname", "globalName", "nicknames", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V", "getId", "()Ljava/lang/String;", "getUsername", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getFriendNickname", "getGlobalName", "getNicknames", "()Ljava/util/Map;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "copy", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Lcom/discord/user_search_worker/UserSearchTransformedUser;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "Serializer", "Companion", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class UserSearchTransformedUser {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String friendNickname;
    private final String globalName;

    @NotNull
    private final String id;
    private final Boolean isBot;
    private final Boolean isFriend;

    @NotNull
    private final Map<String, String> nicknames;

    @NotNull
    private final String username;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/user_search_worker/UserSearchTransformedUser$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/user_search_worker/UserSearchTransformedUser;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÀ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\u0005\u001a\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u0007H\u0016J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u0002H\u0016R\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u0011"}, d2 = {"Lcom/discord/user_search_worker/UserSearchTransformedUser$Serializer;", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/user_search_worker/UserSearchTransformedUser;", "<init>", "()V", "deserialize", "decoder", "Lkotlinx/serialization/encoding/Decoder;", "serialize", "", "encoder", "Lkotlinx/serialization/encoding/Encoder;", "value", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nUserSearchTransformedUser.kt\nKotlin\n*S Kotlin\n*F\n+ 1 UserSearchTransformedUser.kt\ncom/discord/user_search_worker/UserSearchTransformedUser$Serializer\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,67:1\n126#2:68\n153#2,3:69\n*S KotlinDebug\n*F\n+ 1 UserSearchTransformedUser.kt\ncom/discord/user_search_worker/UserSearchTransformedUser$Serializer\n*L\n38#1:68\n38#1:69,3\n*E\n"})
    public static final class Serializer implements KSerializer {

        @NotNull
        public static final Serializer INSTANCE = new Serializer();

        private Serializer() {
        }

        @Override // kotlinx.serialization.DeserializationStrategy
        @NotNull
        public SerialDescriptor getDescriptor() {
            return c.a("UserSearchTransformedUser", zr.e.B);
        }

        /* JADX WARN: Code restructure failed: missing block: B:17:0x0072, code lost:
        
            if (r0 == null) goto L19;
         */
        @Override // kotlinx.serialization.DeserializationStrategy
        @NotNull
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public UserSearchTransformedUser deserialize(@NotNull Decoder decoder) {
            Map d6;
            String str;
            Intrinsics.checkNotNullParameter(decoder, "decoder");
            JsonElement a = ((g) decoder).a();
            Intrinsics.checkNotNull(a, "null cannot be cast to non-null type kotlinx.serialization.json.JsonObject");
            JsonObject jsonObject = (JsonObject) a;
            Object obj = (JsonElement) jsonObject.get("nicknames");
            String str2 = null;
            if (obj != null) {
                if (obj instanceof JsonObject) {
                    Map map = (Map) obj;
                    ArrayList arrayList = new ArrayList(map.size());
                    for (Map.Entry entry : map.entrySet()) {
                        String str3 = (String) entry.getKey();
                        JsonElement jsonElement = (JsonElement) entry.getValue();
                        arrayList.add(new Pair(str3, h.k(jsonElement).b() ? h.k(jsonElement).a() : null));
                    }
                    d6 = v0.m(arrayList);
                } else {
                    d6 = v0.d();
                }
            }
            d6 = v0.d();
            Map map2 = d6;
            Object obj2 = jsonObject.get(StackTraceHelper.ID_KEY);
            Intrinsics.checkNotNull(obj2);
            String a10 = h.k((JsonElement) obj2).a();
            Object obj3 = jsonObject.get(NotificationRenderer.USERNAME);
            Intrinsics.checkNotNull(obj3);
            String a11 = h.k((JsonElement) obj3).a();
            JsonElement jsonElement2 = (JsonElement) jsonObject.get("isBot");
            Boolean valueOf = jsonElement2 != null ? Boolean.valueOf(h.e(h.k(jsonElement2))) : null;
            JsonElement jsonElement3 = (JsonElement) jsonObject.get("isFriend");
            Boolean valueOf2 = jsonElement3 != null ? Boolean.valueOf(h.e(h.k(jsonElement3))) : null;
            JsonElement jsonElement4 = (JsonElement) jsonObject.get("friendNickname");
            if (jsonElement4 != null) {
                JsonPrimitive k = h.k(jsonElement4);
                str = k.b() ? k.a() : null;
            } else {
                str = null;
            }
            JsonElement jsonElement5 = (JsonElement) jsonObject.get("globalName");
            if (jsonElement5 != null) {
                JsonPrimitive k5 = h.k(jsonElement5);
                if (k5.b()) {
                    str2 = k5.a();
                }
            }
            return new UserSearchTransformedUser(a10, a11, valueOf, valueOf2, str, str2, map2);
        }

        @Override // kotlinx.serialization.KSerializer
        public void serialize(@NotNull Encoder encoder, @NotNull UserSearchTransformedUser value) {
            Intrinsics.checkNotNullParameter(encoder, "encoder");
            Intrinsics.checkNotNullParameter(value, "value");
            throw new UnsupportedOperationException();
        }
    }

    public UserSearchTransformedUser(@NotNull String id2, @NotNull String username, Boolean bool, Boolean bool2, String str, String str2, @NotNull Map<String, String> nicknames) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(username, "username");
        Intrinsics.checkNotNullParameter(nicknames, "nicknames");
        this.id = id2;
        this.username = username;
        this.isBot = bool;
        this.isFriend = bool2;
        this.friendNickname = str;
        this.globalName = str2;
        this.nicknames = nicknames;
    }

    public static /* synthetic */ UserSearchTransformedUser copy$default(UserSearchTransformedUser userSearchTransformedUser, String str, String str2, Boolean bool, Boolean bool2, String str3, String str4, Map map, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = userSearchTransformedUser.id;
        }
        if ((i5 & 2) != 0) {
            str2 = userSearchTransformedUser.username;
        }
        if ((i5 & 4) != 0) {
            bool = userSearchTransformedUser.isBot;
        }
        if ((i5 & 8) != 0) {
            bool2 = userSearchTransformedUser.isFriend;
        }
        if ((i5 & 16) != 0) {
            str3 = userSearchTransformedUser.friendNickname;
        }
        if ((i5 & 32) != 0) {
            str4 = userSearchTransformedUser.globalName;
        }
        if ((i5 & 64) != 0) {
            map = userSearchTransformedUser.nicknames;
        }
        String str5 = str4;
        Map map2 = map;
        String str6 = str3;
        Boolean bool3 = bool;
        return userSearchTransformedUser.copy(str, str2, bool3, bool2, str6, str5, map2);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getId() {
        return this.id;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getUsername() {
        return this.username;
    }

    /* renamed from: component3, reason: from getter */
    public final Boolean getIsBot() {
        return this.isBot;
    }

    /* renamed from: component4, reason: from getter */
    public final Boolean getIsFriend() {
        return this.isFriend;
    }

    /* renamed from: component5, reason: from getter */
    public final String getFriendNickname() {
        return this.friendNickname;
    }

    /* renamed from: component6, reason: from getter */
    public final String getGlobalName() {
        return this.globalName;
    }

    @NotNull
    public final Map<String, String> component7() {
        return this.nicknames;
    }

    @NotNull
    public final UserSearchTransformedUser copy(@NotNull String id2, @NotNull String username, Boolean isBot, Boolean isFriend, String friendNickname, String globalName, @NotNull Map<String, String> nicknames) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(username, "username");
        Intrinsics.checkNotNullParameter(nicknames, "nicknames");
        return new UserSearchTransformedUser(id2, username, isBot, isFriend, friendNickname, globalName, nicknames);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof UserSearchTransformedUser)) {
            return false;
        }
        UserSearchTransformedUser userSearchTransformedUser = (UserSearchTransformedUser) other;
        return Intrinsics.areEqual(this.id, userSearchTransformedUser.id) && Intrinsics.areEqual(this.username, userSearchTransformedUser.username) && Intrinsics.areEqual(this.isBot, userSearchTransformedUser.isBot) && Intrinsics.areEqual(this.isFriend, userSearchTransformedUser.isFriend) && Intrinsics.areEqual(this.friendNickname, userSearchTransformedUser.friendNickname) && Intrinsics.areEqual(this.globalName, userSearchTransformedUser.globalName) && Intrinsics.areEqual(this.nicknames, userSearchTransformedUser.nicknames);
    }

    public final String getFriendNickname() {
        return this.friendNickname;
    }

    public final String getGlobalName() {
        return this.globalName;
    }

    @NotNull
    public final String getId() {
        return this.id;
    }

    @NotNull
    public final Map<String, String> getNicknames() {
        return this.nicknames;
    }

    @NotNull
    public final String getUsername() {
        return this.username;
    }

    public int hashCode() {
        int d6 = a3.e.d(this.id.hashCode() * 31, 31, this.username);
        Boolean bool = this.isBot;
        int hashCode = (d6 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.isFriend;
        int hashCode2 = (hashCode + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        String str = this.friendNickname;
        int hashCode3 = (hashCode2 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.globalName;
        return this.nicknames.hashCode() + ((hashCode3 + (str2 != null ? str2.hashCode() : 0)) * 31);
    }

    public final Boolean isBot() {
        return this.isBot;
    }

    public final Boolean isFriend() {
        return this.isFriend;
    }

    @NotNull
    public String toString() {
        String str = this.id;
        String str2 = this.username;
        Boolean bool = this.isBot;
        Boolean bool2 = this.isFriend;
        String str3 = this.friendNickname;
        String str4 = this.globalName;
        Map<String, String> map = this.nicknames;
        StringBuilder t5 = a3.e.t("UserSearchTransformedUser(id=", str, ", username=", str2, ", isBot=");
        t5.append(bool);
        t5.append(", isFriend=");
        t5.append(bool2);
        t5.append(", friendNickname=");
        a3.e.A(t5, str3, ", globalName=", str4, ", nicknames=");
        t5.append(map);
        t5.append(")");
        return t5.toString();
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ UserSearchTransformedUser(String str, String str2, Boolean bool, Boolean bool2, String str3, String str4, Map map, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, bool, bool2, str3, r8, r9);
        Map map2;
        String str5;
        bool = (i5 & 4) != 0 ? null : bool;
        bool2 = (i5 & 8) != 0 ? null : bool2;
        str3 = (i5 & 16) != 0 ? null : str3;
        if ((i5 & 32) != 0) {
            map2 = map;
            str5 = null;
        } else {
            map2 = map;
            str5 = str4;
        }
    }
}
