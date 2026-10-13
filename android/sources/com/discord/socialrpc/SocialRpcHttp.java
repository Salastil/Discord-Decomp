package com.discord.socialrpc;

import bs.d;
import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.modules.network.OkHttpClientProvider;
import cs.r;
import e4.f;
import fo.l;
import fo.m;
import java.io.IOException;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonObject;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import org.jetbrains.annotations.NotNull;
import s4.h;
import xr.e;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u0000 \u001a2\u00020\u0001:\u0004\u0017\u0018\u0019\u001aB\u0011\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\"\u0010\u0006\u001a\u0004\u0018\u00010\u00072\u0006\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u00072\u0006\u0010\u000b\u001a\u00020\fJ\u0016\u0010\r\u001a\u00020\u000e2\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0007J \u0010\u000f\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\u00072\u0006\u0010\u0011\u001a\u00020\u0007H\u0002J\u0010\u0010\u0012\u001a\u00020\u00072\u0006\u0010\u0013\u001a\u00020\u0014H\u0002J\u0018\u0010\u0015\u001a\u00020\u00162\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\u0007H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001b"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp;", "", "httpClient", "Lokhttp3/OkHttpClient;", "<init>", "(Lokhttp3/OkHttpClient;)V", "updateSession", "", "config", "Lcom/discord/socialrpc/SocialRpcNetworkConfig;", "token", "activity", "Lkotlinx/serialization/json/JsonObject;", "deleteSession", "", "post", "endpoint", "body", "execute", "request", "Lokhttp3/Request;", "baseRequest", "Lokhttp3/Request$Builder;", "SessionUpdate", "SessionDelete", "SessionResult", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSocialRpcHttp.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SocialRpcHttp.kt\ncom/discord/socialrpc/SocialRpcHttp\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 SerialFormat.kt\nkotlinx/serialization/SerialFormatKt\n+ 4 Json.kt\nkotlinx/serialization/json/Json\n*L\n1#1,100:1\n1#2:101\n113#3:102\n113#3:104\n147#4:103\n*S KotlinDebug\n*F\n+ 1 SocialRpcHttp.kt\ncom/discord/socialrpc/SocialRpcHttp\n*L\n42#1:102\n55#1:104\n49#1:103\n*E\n"})
/* loaded from: classes.dex */
public final class SocialRpcHttp {

    @NotNull
    private static final String ENDPOINT_HEADLESS_SESSIONS = "/users/@me/headless-sessions";

    @NotNull
    private static final String ENDPOINT_HEADLESS_SESSIONS_DELETE = "/users/@me/headless-sessions/delete";

    @NotNull
    private static final MediaType JSON_MEDIA_TYPE;

    @NotNull
    private static final Json json;

    @NotNull
    private final OkHttpClient httpClient;

    @e
    @Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0083\b\u0018\u0000 \u001d2\u00020\u0001:\u0002\u001c\u001dB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005B%\b\u0010\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\u0004\u0010\nJ\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0007HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0003HÖ\u0001J%\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00002\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0001¢\u0006\u0002\b\u001bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u001e"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionDelete;", "", "token", "", "<init>", "(Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getToken", "()Ljava/lang/String;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$social_rpc_release", "$serializer", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class SessionDelete {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private final String token;

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionDelete$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/socialrpc/SocialRpcHttp$SessionDelete;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return SocialRpcHttp$SessionDelete$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        public /* synthetic */ SessionDelete(int i5, String str, SerializationConstructorMarker serializationConstructorMarker) {
            if (1 == (i5 & 1)) {
                this.token = str;
            } else {
                h1.l(i5, 1, SocialRpcHttp$SessionDelete$$serializer.INSTANCE.getDescriptor());
                throw null;
            }
        }

        public static /* synthetic */ SessionDelete copy$default(SessionDelete sessionDelete, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = sessionDelete.token;
            }
            return sessionDelete.copy(str);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getToken() {
            return this.token;
        }

        @NotNull
        public final SessionDelete copy(@NotNull String token) {
            Intrinsics.checkNotNullParameter(token, "token");
            return new SessionDelete(token);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof SessionDelete) && Intrinsics.areEqual(this.token, ((SessionDelete) other).token);
        }

        @NotNull
        public final String getToken() {
            return this.token;
        }

        public int hashCode() {
            return this.token.hashCode();
        }

        @NotNull
        public String toString() {
            return h.f("SessionDelete(token=", this.token, ")");
        }

        public SessionDelete(@NotNull String token) {
            Intrinsics.checkNotNullParameter(token, "token");
            this.token = token;
        }
    }

    @e
    @Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0083\b\u0018\u0000 \u001d2\u00020\u0001:\u0002\u001c\u001dB\u0013\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005B%\b\u0010\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\u0004\u0010\nJ\u000b\u0010\r\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0015\u0010\u000e\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0007HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0003HÖ\u0001J%\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00002\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0001¢\u0006\u0002\b\u001bR\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u001e"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionResult;", "", "token", "", "<init>", "(Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getToken", "()Ljava/lang/String;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$social_rpc_release", "$serializer", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class SessionResult {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);
        private final String token;

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionResult$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/socialrpc/SocialRpcHttp$SessionResult;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return SocialRpcHttp$SessionResult$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        public SessionResult() {
            this((String) null, 1, (DefaultConstructorMarker) (0 == true ? 1 : 0));
        }

        public static /* synthetic */ SessionResult copy$default(SessionResult sessionResult, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = sessionResult.token;
            }
            return sessionResult.copy(str);
        }

        public static final /* synthetic */ void write$Self$social_rpc_release(SessionResult self, CompositeEncoder output, SerialDescriptor serialDesc) {
            if (!output.I(serialDesc, 0) && self.token == null) {
                return;
            }
            output.z(serialDesc, 0, v1.a, self.token);
        }

        /* renamed from: component1, reason: from getter */
        public final String getToken() {
            return this.token;
        }

        @NotNull
        public final SessionResult copy(String token) {
            return new SessionResult(token);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            return (other instanceof SessionResult) && Intrinsics.areEqual(this.token, ((SessionResult) other).token);
        }

        public final String getToken() {
            return this.token;
        }

        public int hashCode() {
            String str = this.token;
            if (str == null) {
                return 0;
            }
            return str.hashCode();
        }

        @NotNull
        public String toString() {
            return h.f("SessionResult(token=", this.token, ")");
        }

        public /* synthetic */ SessionResult(int i5, String str, SerializationConstructorMarker serializationConstructorMarker) {
            if ((i5 & 1) == 0) {
                this.token = null;
            } else {
                this.token = str;
            }
        }

        public SessionResult(String str) {
            this.token = str;
        }

        public /* synthetic */ SessionResult(String str, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this((i5 & 1) != 0 ? null : str);
        }
    }

    @e
    @Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0083\b\u0018\u0000 #2\u00020\u0001:\u0002\"#B!\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bB5\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\u000b\u0010\u0012\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J%\u0010\u0014\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\nHÖ\u0001J\t\u0010\u0019\u001a\u00020\u0003HÖ\u0001J%\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00002\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020 H\u0001¢\u0006\u0002\b!R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011¨\u0006$"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionUpdate;", "", "token", "", "activities", "", "Lkotlinx/serialization/json/JsonObject;", "<init>", "(Ljava/lang/String;Ljava/util/List;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getToken", "()Ljava/lang/String;", "getActivities", "()Ljava/util/List;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$social_rpc_release", "$serializer", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class SessionUpdate {

        @NotNull
        private final List<JsonObject> activities;
        private final String token;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);

        @NotNull
        private static final Lazy[] $childSerializers = {null, l.b(m.f8827e, new c(0))};

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/socialrpc/SocialRpcHttp$SessionUpdate$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/socialrpc/SocialRpcHttp$SessionUpdate;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return SocialRpcHttp$SessionUpdate$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        public /* synthetic */ SessionUpdate(int i5, String str, List list, SerializationConstructorMarker serializationConstructorMarker) {
            if (2 != (i5 & 2)) {
                h1.l(i5, 2, SocialRpcHttp$SessionUpdate$$serializer.INSTANCE.getDescriptor());
                throw null;
            }
            if ((i5 & 1) == 0) {
                this.token = null;
            } else {
                this.token = str;
            }
            this.activities = list;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
            return new d(r.a, 0);
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ SessionUpdate copy$default(SessionUpdate sessionUpdate, String str, List list, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = sessionUpdate.token;
            }
            if ((i5 & 2) != 0) {
                list = sessionUpdate.activities;
            }
            return sessionUpdate.copy(str, list);
        }

        public static final /* synthetic */ void write$Self$social_rpc_release(SessionUpdate self, CompositeEncoder output, SerialDescriptor serialDesc) {
            Lazy[] lazyArr = $childSerializers;
            if (output.I(serialDesc, 0) || self.token != null) {
                output.z(serialDesc, 0, v1.a, self.token);
            }
            output.g(serialDesc, 1, (KSerializer) lazyArr[1].getValue(), self.activities);
        }

        /* renamed from: component1, reason: from getter */
        public final String getToken() {
            return this.token;
        }

        @NotNull
        public final List<JsonObject> component2() {
            return this.activities;
        }

        @NotNull
        public final SessionUpdate copy(String token, @NotNull List<JsonObject> activities) {
            Intrinsics.checkNotNullParameter(activities, "activities");
            return new SessionUpdate(token, activities);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof SessionUpdate)) {
                return false;
            }
            SessionUpdate sessionUpdate = (SessionUpdate) other;
            return Intrinsics.areEqual(this.token, sessionUpdate.token) && Intrinsics.areEqual(this.activities, sessionUpdate.activities);
        }

        @NotNull
        public final List<JsonObject> getActivities() {
            return this.activities;
        }

        public final String getToken() {
            return this.token;
        }

        public int hashCode() {
            String str = this.token;
            return this.activities.hashCode() + ((str == null ? 0 : str.hashCode()) * 31);
        }

        @NotNull
        public String toString() {
            return "SessionUpdate(token=" + this.token + ", activities=" + this.activities + ")";
        }

        public SessionUpdate(String str, @NotNull List<JsonObject> activities) {
            Intrinsics.checkNotNullParameter(activities, "activities");
            this.token = str;
            this.activities = activities;
        }

        public /* synthetic */ SessionUpdate(String str, List list, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this((i5 & 1) != 0 ? null : str, list);
        }
    }

    static {
        Pattern pattern = MediaType.f16040d;
        JSON_MEDIA_TYPE = f.s("application/json");
        json = d9.a.c(new b(0));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public SocialRpcHttp() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    private final Request.Builder baseRequest(SocialRpcNetworkConfig config, String endpoint) {
        Request.Builder builder = new Request.Builder();
        builder.i(config.getApiBaseUrl() + endpoint);
        builder.a("Authorization", config.getToken());
        for (Map.Entry<String, String> entry : config.getHeaders().entrySet()) {
            builder.a(entry.getKey(), entry.getValue());
        }
        return builder;
    }

    private final String execute(Request request) {
        Response e9 = this.httpClient.a(request).e();
        try {
            ResponseBody responseBody = e9.f16091y;
            String string = responseBody != null ? responseBody.string() : null;
            if (e9.g() && string != null) {
                e9.close();
                return string;
            }
            throw new IOException("headless session request failed: " + e9.f16088v);
        } finally {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit json$lambda$2(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        Json.a = false;
        return Unit.a;
    }

    private final String post(SocialRpcNetworkConfig config, String endpoint, String body) {
        Request.Builder baseRequest = baseRequest(config, endpoint);
        RequestBody.Companion companion = RequestBody.Companion;
        MediaType mediaType = JSON_MEDIA_TYPE;
        companion.getClass();
        okhttp3.d body2 = RequestBody.Companion.a(body, mediaType);
        baseRequest.getClass();
        Intrinsics.checkNotNullParameter(body2, "body");
        baseRequest.f("POST", body2);
        return execute(baseRequest.b());
    }

    public final void deleteSession(@NotNull SocialRpcNetworkConfig config, @NotNull String token) {
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(token, "token");
        Json json2 = json;
        SessionDelete sessionDelete = new SessionDelete(token);
        json2.getClass();
        post(config, ENDPOINT_HEADLESS_SESSIONS_DELETE, json2.c(SessionDelete.INSTANCE.serializer(), sessionDelete));
    }

    public final String updateSession(@NotNull SocialRpcNetworkConfig config, String token, @NotNull JsonObject activity) {
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(activity, "activity");
        Json json2 = json;
        if (token == null || token.length() <= 0) {
            token = null;
        }
        SessionUpdate sessionUpdate = new SessionUpdate(token, b0.c(activity));
        json2.getClass();
        String post = post(config, ENDPOINT_HEADLESS_SESSIONS, json2.c(SessionUpdate.INSTANCE.serializer(), sessionUpdate));
        json2.getClass();
        return ((SessionResult) json2.b(SessionResult.INSTANCE.serializer(), post)).getToken();
    }

    public SocialRpcHttp(@NotNull OkHttpClient httpClient) {
        Intrinsics.checkNotNullParameter(httpClient, "httpClient");
        this.httpClient = httpClient;
    }

    public /* synthetic */ SocialRpcHttp(OkHttpClient okHttpClient, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? OkHttpClientProvider.getOkHttpClient() : okHttpClient);
    }
}
