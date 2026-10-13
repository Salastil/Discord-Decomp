package com.discord.socialrpc;

import bs.e1;
import bs.v1;
import com.appsflyer.AppsFlyerProperties;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.socialsdk.rpc.IDiscordRpcCallback;
import com.facebook.react.devsupport.StackTraceHelper;
import cs.h;
import cs.r;
import fo.q;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.channels.Channel;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonNull;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonObjectBuilder;
import nr.g0;
import nr.m1;
import nr.s1;
import nr.x;
import org.jetbrains.annotations.NotNull;
import pr.n;
import ur.d;
import xr.e;

@Metadata(d1 = {"\u0000r\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0018\bÆ\u0002\u0018\u00002\u00020\u0001:\u0003FGHB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J&\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020\n2\u0006\u0010 \u001a\u00020\b2\u0006\u0010!\u001a\u00020\n2\u0006\u0010\"\u001a\u00020#J\u0016\u0010$\u001a\u00020%2\u0006\u0010\u001f\u001a\u00020\n2\u0006\u0010&\u001a\u00020\nJ\u000e\u0010'\u001a\u00020%2\u0006\u0010\u001f\u001a\u00020\nJ\u001e\u0010(\u001a\u00020%2\u0006\u0010\u001f\u001a\u00020\n2\u0006\u0010)\u001a\u00020\u001bH\u0082@¢\u0006\u0002\u0010*J\u0012\u0010+\u001a\u0004\u0018\u00010,2\u0006\u0010-\u001a\u00020\nH\u0002J,\u0010.\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\f\u0010/\u001a\b\u0012\u0004\u0012\u000201002\u0006\u00102\u001a\u00020\bH\u0082@¢\u0006\u0002\u00103J\u001e\u00104\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\f\u00105\u001a\b\u0012\u0004\u0012\u00020100H\u0002J&\u00106\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\u0006\u0010&\u001a\u00020\n2\f\u00105\u001a\b\u0012\u0004\u0012\u00020100H\u0002J \u00107\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\u0006\u00108\u001a\u00020,2\u0006\u00109\u001a\u00020\u0018H\u0002J\u0018\u0010:\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\u0006\u00108\u001a\u00020,H\u0002J\u0018\u0010;\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\u0006\u0010<\u001a\u00020\u0018H\u0002J\u001a\u0010=\u001a\u0004\u0018\u0001012\u0006\u0010)\u001a\u00020\u001b2\u0006\u0010&\u001a\u00020\nH\u0002J$\u0010>\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\b\u0010?\u001a\u0004\u0018\u00010\n2\b\u0010@\u001a\u0004\u0018\u00010\u0018H\u0002J\"\u0010A\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\b\u0010?\u001a\u0004\u0018\u00010\n2\u0006\u0010B\u001a\u00020\nH\u0002J\u0018\u0010C\u001a\u00020%2\u0006\u0010)\u001a\u00020\u001b2\u0006\u0010&\u001a\u00020\nH\u0002J \u0010D\u001a\u00020%2\u0006\u0010\u001f\u001a\u00020\n2\u0006\u0010)\u001a\u00020\u001b2\u0006\u0010B\u001a\u00020\nH\u0002J\u0010\u0010E\u001a\u00020%2\u0006\u0010\u001f\u001a\u00020\nH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\nX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\nX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\nX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0018X\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\u0019\u001a\u001e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u001b0\u001aj\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u001b`\u001cX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006I"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager;", "", "<init>", "()V", "MAX_CONNECTIONS", "", "MAX_QUEUED_FRAMES", "MIN_UPDATE_INTERVAL_MS", "", "CMD_SET_ACTIVITY", "", "CMD_DISPATCH", "EVT_READY", "EVT_ERROR", "RPC_VERSION", "RPC_ERROR_UNKNOWN", "CLOSE_NORMAL", "scope", "Lkotlinx/coroutines/CoroutineScope;", "http", "Lcom/discord/socialrpc/SocialRpcHttp;", "json", "Lkotlinx/serialization/json/Json;", "PLACEHOLDER_USER", "Lkotlinx/serialization/json/JsonObject;", "connections", "Ljava/util/HashMap;", "Lcom/discord/socialrpc/SocialRpcSessionManager$Connection;", "Lkotlin/collections/HashMap;", "onConnect", "", "connectionId", "applicationId", "version", "callback", "Lcom/discord/socialsdk/rpc/IDiscordRpcCallback;", "onFrame", "", "frame", "onDisconnect", "runConnection", "connection", "(Ljava/lang/String;Lcom/discord/socialrpc/SocialRpcSessionManager$Connection;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "configFor", "Lcom/discord/socialrpc/SocialRpcNetworkConfig;", "authToken", "awaitUpdateWindow", "pending", "", "Lcom/discord/socialrpc/SocialRpcSessionManager$Update;", "deadline", "(Lcom/discord/socialrpc/SocialRpcSessionManager$Connection;Ljava/util/List;JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "drain", "into", "addParsed", "applyUpdate", "config", "activity", "applyClear", "sendReady", "user", "parseSetActivity", "ackActivity", "nonce", "data", "errorActivity", "message", "sendFrame", "closeAndCleanup", "cleanup", "SetActivityFrame", "Update", "Connection", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSocialRpcSessionManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SocialRpcSessionManager.kt\ncom/discord/socialrpc/SocialRpcSessionManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 JsonElementBuilders.kt\nkotlinx/serialization/json/JsonElementBuildersKt\n+ 5 Json.kt\nkotlinx/serialization/json/Json\n*L\n1#1,316:1\n1#2:317\n543#3,6:318\n543#3,6:324\n1761#3,3:330\n29#4,3:333\n29#4,3:337\n29#4,3:340\n29#4,3:343\n147#5:336\n*S KotlinDebug\n*F\n+ 1 SocialRpcSessionManager.kt\ncom/discord/socialrpc/SocialRpcSessionManager\n*L\n140#1:318,6\n144#1:324,6\n190#1:330,3\n234#1:333,3\n280#1:337,3\n290#1:340,3\n47#1:343,3\n248#1:336\n*E\n"})
/* loaded from: classes.dex */
public final class SocialRpcSessionManager {
    private static final int CLOSE_NORMAL = 1000;

    @NotNull
    private static final String CMD_DISPATCH = "DISPATCH";

    @NotNull
    private static final String CMD_SET_ACTIVITY = "SET_ACTIVITY";

    @NotNull
    private static final String EVT_ERROR = "ERROR";

    @NotNull
    private static final String EVT_READY = "READY";

    @NotNull
    public static final SocialRpcSessionManager INSTANCE = new SocialRpcSessionManager();
    private static final int MAX_CONNECTIONS = 10;
    private static final int MAX_QUEUED_FRAMES = 32;
    private static final long MIN_UPDATE_INTERVAL_MS = 5000;

    @NotNull
    private static final JsonObject PLACEHOLDER_USER;
    private static final int RPC_ERROR_UNKNOWN = 1000;
    private static final int RPC_VERSION = 1;

    @NotNull
    private static final HashMap<String, Connection> connections;

    @NotNull
    private static final SocialRpcHttp http;

    @NotNull
    private static final Json json;

    @NotNull
    private static final CoroutineScope scope;

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0002\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0017\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00050\u0011¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u001c\u0010\u0014\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010\r\"\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$Connection;", "", "applicationId", "", "version", "", "callback", "Lcom/discord/socialsdk/rpc/IDiscordRpcCallback;", "<init>", "(JLjava/lang/String;Lcom/discord/socialsdk/rpc/IDiscordRpcCallback;)V", "getApplicationId", "()J", "getVersion", "()Ljava/lang/String;", "getCallback", "()Lcom/discord/socialsdk/rpc/IDiscordRpcCallback;", AppsFlyerProperties.CHANNEL, "Lkotlinx/coroutines/channels/Channel;", "getChannel", "()Lkotlinx/coroutines/channels/Channel;", "token", "getToken", "setToken", "(Ljava/lang/String;)V", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Connection {
        private final long applicationId;

        @NotNull
        private final IDiscordRpcCallback callback;

        @NotNull
        private final Channel channel;
        private String token;

        @NotNull
        private final String version;

        public Connection(long j, @NotNull String version, @NotNull IDiscordRpcCallback callback) {
            Intrinsics.checkNotNullParameter(version, "version");
            Intrinsics.checkNotNullParameter(callback, "callback");
            this.applicationId = j;
            this.version = version;
            this.callback = callback;
            this.channel = zk.a.a(32, 4, pr.a.f16468e);
        }

        public final long getApplicationId() {
            return this.applicationId;
        }

        @NotNull
        public final IDiscordRpcCallback getCallback() {
            return this.callback;
        }

        @NotNull
        public final Channel getChannel() {
            return this.channel;
        }

        public final String getToken() {
            return this.token;
        }

        @NotNull
        public final String getVersion() {
            return this.version;
        }

        public final void setToken(String str) {
            this.token = str;
        }
    }

    @e
    @Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0083\b\u0018\u0000 &2\u00020\u0001:\u0003$%&B+\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0004\b\u0007\u0010\bB9\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\u000b\u0010\u0013\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0014\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0015\u001a\u0004\u0018\u00010\u0006HÆ\u0003J-\u0010\u0016\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006HÆ\u0001J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001a\u001a\u00020\nHÖ\u0001J\t\u0010\u001b\u001a\u00020\u0003HÖ\u0001J%\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u00002\u0006\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\"H\u0001¢\u0006\u0002\b#R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012¨\u0006'"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame;", "", "cmd", "", "nonce", "args", "Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;", "<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getCmd", "()Ljava/lang/String;", "getNonce", "getArgs", "()Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$social_rpc_release", "Args", "$serializer", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class SetActivityFrame {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);
        private final Args args;
        private final String cmd;
        private final String nonce;

        @e
        @Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u001e2\u00020\u0001:\u0002\u001d\u001eB\u0013\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005B%\b\u0010\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\u0004\u0010\nJ\u000b\u0010\r\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0015\u0010\u000e\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0007HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0014HÖ\u0001J%\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00002\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0001¢\u0006\u0002\b\u001cR\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u001f"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;", "", "activity", "Lkotlinx/serialization/json/JsonObject;", "<init>", "(Lkotlinx/serialization/json/JsonObject;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILkotlinx/serialization/json/JsonObject;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getActivity", "()Lkotlinx/serialization/json/JsonObject;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$social_rpc_release", "$serializer", "Companion", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class Args {

            /* renamed from: Companion, reason: from kotlin metadata */
            @NotNull
            public static final Companion INSTANCE = new Companion(null);
            private final JsonObject activity;

            @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Args;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
            public static final class Companion {
                private Companion() {
                }

                @NotNull
                public final KSerializer serializer() {
                    return SocialRpcSessionManager$SetActivityFrame$Args$$serializer.INSTANCE;
                }

                public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                    this();
                }
            }

            /* JADX WARN: Multi-variable type inference failed */
            public Args() {
                this((JsonObject) null, 1, (DefaultConstructorMarker) (0 == true ? 1 : 0));
            }

            public static /* synthetic */ Args copy$default(Args args, JsonObject jsonObject, int i5, Object obj) {
                if ((i5 & 1) != 0) {
                    jsonObject = args.activity;
                }
                return args.copy(jsonObject);
            }

            public static final /* synthetic */ void write$Self$social_rpc_release(Args self, CompositeEncoder output, SerialDescriptor serialDesc) {
                if (!output.I(serialDesc, 0) && self.activity == null) {
                    return;
                }
                output.z(serialDesc, 0, r.a, self.activity);
            }

            /* renamed from: component1, reason: from getter */
            public final JsonObject getActivity() {
                return this.activity;
            }

            @NotNull
            public final Args copy(JsonObject activity) {
                return new Args(activity);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                return (other instanceof Args) && Intrinsics.areEqual(this.activity, ((Args) other).activity);
            }

            public final JsonObject getActivity() {
                return this.activity;
            }

            public int hashCode() {
                JsonObject jsonObject = this.activity;
                if (jsonObject == null) {
                    return 0;
                }
                return jsonObject.f13610d.hashCode();
            }

            @NotNull
            public String toString() {
                return "Args(activity=" + this.activity + ")";
            }

            public /* synthetic */ Args(int i5, JsonObject jsonObject, SerializationConstructorMarker serializationConstructorMarker) {
                if ((i5 & 1) == 0) {
                    this.activity = null;
                } else {
                    this.activity = jsonObject;
                }
            }

            public Args(JsonObject jsonObject) {
                this.activity = jsonObject;
            }

            public /* synthetic */ Args(JsonObject jsonObject, int i5, DefaultConstructorMarker defaultConstructorMarker) {
                this((i5 & 1) != 0 ? null : jsonObject);
            }
        }

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/socialrpc/SocialRpcSessionManager$SetActivityFrame;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
            }

            @NotNull
            public final KSerializer serializer() {
                return SocialRpcSessionManager$SetActivityFrame$$serializer.INSTANCE;
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }
        }

        public SetActivityFrame() {
            this((String) null, (String) null, (Args) null, 7, (DefaultConstructorMarker) null);
        }

        public static /* synthetic */ SetActivityFrame copy$default(SetActivityFrame setActivityFrame, String str, String str2, Args args, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = setActivityFrame.cmd;
            }
            if ((i5 & 2) != 0) {
                str2 = setActivityFrame.nonce;
            }
            if ((i5 & 4) != 0) {
                args = setActivityFrame.args;
            }
            return setActivityFrame.copy(str, str2, args);
        }

        public static final /* synthetic */ void write$Self$social_rpc_release(SetActivityFrame self, CompositeEncoder output, SerialDescriptor serialDesc) {
            if (output.I(serialDesc, 0) || self.cmd != null) {
                output.z(serialDesc, 0, v1.a, self.cmd);
            }
            if (output.I(serialDesc, 1) || self.nonce != null) {
                output.z(serialDesc, 1, v1.a, self.nonce);
            }
            if (!output.I(serialDesc, 2) && self.args == null) {
                return;
            }
            output.z(serialDesc, 2, SocialRpcSessionManager$SetActivityFrame$Args$$serializer.INSTANCE, self.args);
        }

        /* renamed from: component1, reason: from getter */
        public final String getCmd() {
            return this.cmd;
        }

        /* renamed from: component2, reason: from getter */
        public final String getNonce() {
            return this.nonce;
        }

        /* renamed from: component3, reason: from getter */
        public final Args getArgs() {
            return this.args;
        }

        @NotNull
        public final SetActivityFrame copy(String cmd, String nonce, Args args) {
            return new SetActivityFrame(cmd, nonce, args);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof SetActivityFrame)) {
                return false;
            }
            SetActivityFrame setActivityFrame = (SetActivityFrame) other;
            return Intrinsics.areEqual(this.cmd, setActivityFrame.cmd) && Intrinsics.areEqual(this.nonce, setActivityFrame.nonce) && Intrinsics.areEqual(this.args, setActivityFrame.args);
        }

        public final Args getArgs() {
            return this.args;
        }

        public final String getCmd() {
            return this.cmd;
        }

        public final String getNonce() {
            return this.nonce;
        }

        public int hashCode() {
            String str = this.cmd;
            int hashCode = (str == null ? 0 : str.hashCode()) * 31;
            String str2 = this.nonce;
            int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
            Args args = this.args;
            return hashCode2 + (args != null ? args.hashCode() : 0);
        }

        @NotNull
        public String toString() {
            String str = this.cmd;
            String str2 = this.nonce;
            Args args = this.args;
            StringBuilder t5 = a3.e.t("SetActivityFrame(cmd=", str, ", nonce=", str2, ", args=");
            t5.append(args);
            t5.append(")");
            return t5.toString();
        }

        public /* synthetic */ SetActivityFrame(int i5, String str, String str2, Args args, SerializationConstructorMarker serializationConstructorMarker) {
            if ((i5 & 1) == 0) {
                this.cmd = null;
            } else {
                this.cmd = str;
            }
            if ((i5 & 2) == 0) {
                this.nonce = null;
            } else {
                this.nonce = str2;
            }
            if ((i5 & 4) == 0) {
                this.args = null;
            } else {
                this.args = args;
            }
        }

        public SetActivityFrame(String str, String str2, Args args) {
            this.cmd = str;
            this.nonce = str2;
            this.args = args;
        }

        public /* synthetic */ SetActivityFrame(String str, String str2, Args args, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : args);
        }
    }

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\br\u0018\u00002\u00020\u0001:\u0002\u0002\u0003\u0082\u0001\u0002\u0004\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$Update;", "", "Set", "Clear", "Lcom/discord/socialrpc/SocialRpcSessionManager$Update$Clear;", "Lcom/discord/socialrpc/SocialRpcSessionManager$Update$Set;", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface Update {

        @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$Update$Clear;", "Lcom/discord/socialrpc/SocialRpcSessionManager$Update;", "<init>", "()V", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Clear implements Update {

            @NotNull
            public static final Clear INSTANCE = new Clear();

            private Clear() {
            }
        }

        @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rHÖ\u0003J\t\u0010\u000e\u001a\u00020\u000fHÖ\u0001J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0012"}, d2 = {"Lcom/discord/socialrpc/SocialRpcSessionManager$Update$Set;", "Lcom/discord/socialrpc/SocialRpcSessionManager$Update;", "activity", "Lkotlinx/serialization/json/JsonObject;", "<init>", "(Lkotlinx/serialization/json/JsonObject;)V", "getActivity", "()Lkotlinx/serialization/json/JsonObject;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "social_rpc_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class Set implements Update {

            @NotNull
            private final JsonObject activity;

            public Set(@NotNull JsonObject activity) {
                Intrinsics.checkNotNullParameter(activity, "activity");
                this.activity = activity;
            }

            public static /* synthetic */ Set copy$default(Set set, JsonObject jsonObject, int i5, Object obj) {
                if ((i5 & 1) != 0) {
                    jsonObject = set.activity;
                }
                return set.copy(jsonObject);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final JsonObject getActivity() {
                return this.activity;
            }

            @NotNull
            public final Set copy(@NotNull JsonObject activity) {
                Intrinsics.checkNotNullParameter(activity, "activity");
                return new Set(activity);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                return (other instanceof Set) && Intrinsics.areEqual(this.activity, ((Set) other).activity);
            }

            @NotNull
            public final JsonObject getActivity() {
                return this.activity;
            }

            public int hashCode() {
                return this.activity.f13610d.hashCode();
            }

            @NotNull
            public String toString() {
                return "Set(activity=" + this.activity + ")";
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    static {
        m1 m1Var = new m1();
        ur.e eVar = g0.a;
        scope = x.b(kotlin.coroutines.e.c(m1Var, d.f19093i));
        http = new SocialRpcHttp(null, 1, null == true ? 1 : 0);
        json = d9.a.c(new b(2));
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, StackTraceHelper.ID_KEY, "0");
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, NotificationRenderer.USERNAME, "Discord User");
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "discriminator", "0");
        Boolean bool = Boolean.FALSE;
        Intrinsics.checkNotNullParameter(jsonObjectBuilder, "<this>");
        Intrinsics.checkNotNullParameter("bot", "key");
        jsonObjectBuilder.b("bot", h.a(bool));
        com.facebook.imagepipeline.nativecode.b.z(jsonObjectBuilder, "flags", 0);
        com.facebook.imagepipeline.nativecode.b.z(jsonObjectBuilder, "premium_type", 0);
        PLACEHOLDER_USER = jsonObjectBuilder.a();
        connections = new HashMap<>();
    }

    private SocialRpcSessionManager() {
    }

    private final void ackActivity(Connection connection, String nonce, JsonObject data) {
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "cmd", CMD_SET_ACTIVITY);
        JsonElement jsonElement = data;
        if (data == null) {
            jsonElement = JsonNull.INSTANCE;
        }
        jsonObjectBuilder.b("data", jsonElement);
        jsonObjectBuilder.b("evt", JsonNull.INSTANCE);
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "nonce", nonce);
        sendFrame(connection, jsonObjectBuilder.a().toString());
    }

    private final void addParsed(Connection connection, String frame, List<Update> into) {
        Update parseSetActivity = parseSetActivity(connection, frame);
        if (parseSetActivity != null) {
            into.add(parseSetActivity);
        }
    }

    private final void applyClear(Connection connection, SocialRpcNetworkConfig config) {
        String token = connection.getToken();
        if (token == null) {
            return;
        }
        try {
            q qVar = Result.f13476e;
            http.deleteSession(config, token);
            Unit unit = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            ki.b.i(th2);
        }
        connection.setToken(null);
    }

    private final void applyUpdate(Connection connection, SocialRpcNetworkConfig config, JsonObject activity) {
        Object i5;
        Object i6;
        String token;
        try {
            q qVar = Result.f13476e;
            i5 = http.updateSession(config, connection.getToken(), activity);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        Throwable a = Result.a(i5);
        if (a != null) {
            try {
                token = connection.getToken();
            } catch (Throwable th3) {
                q qVar3 = Result.f13476e;
                i6 = ki.b.i(th3);
            }
            if (token == null) {
                throw a;
            }
            if (token.length() == 0) {
                throw a;
            }
            i6 = http.updateSession(config, null, activity);
            i5 = i6;
        }
        if (Result.a(i5) == null) {
            connection.setToken((String) i5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x003d  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x0060 -> B:10:0x0063). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object awaitUpdateWindow(Connection connection, List<Update> list, long j, Continuation continuation) {
        SocialRpcSessionManager$awaitUpdateWindow$1 socialRpcSessionManager$awaitUpdateWindow$1;
        int i5;
        if (continuation instanceof SocialRpcSessionManager$awaitUpdateWindow$1) {
            socialRpcSessionManager$awaitUpdateWindow$1 = (SocialRpcSessionManager$awaitUpdateWindow$1) continuation;
            int i6 = socialRpcSessionManager$awaitUpdateWindow$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                socialRpcSessionManager$awaitUpdateWindow$1.label = i6 - Integer.MIN_VALUE;
                Object obj = socialRpcSessionManager$awaitUpdateWindow$1.result;
                ko.a aVar = ko.a.f13464d;
                i5 = socialRpcSessionManager$awaitUpdateWindow$1.label;
                if (i5 != 0) {
                    ki.b.R(obj);
                    if (System.currentTimeMillis() < j) {
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    long j5 = socialRpcSessionManager$awaitUpdateWindow$1.J$0;
                    List<Update> list2 = (List) socialRpcSessionManager$awaitUpdateWindow$1.L$1;
                    Connection connection2 = (Connection) socialRpcSessionManager$awaitUpdateWindow$1.L$0;
                    ki.b.R(obj);
                    list = list2;
                    connection = connection2;
                    j = j5;
                    String str = (String) obj;
                    if (str != null) {
                        return Unit.a;
                    }
                    addParsed(connection, str, list);
                    drain(connection, list);
                    if (list == null || !list.isEmpty()) {
                        Iterator<T> it = list.iterator();
                        while (it.hasNext()) {
                            if (((Update) it.next()) instanceof Update.Clear) {
                                return Unit.a;
                            }
                        }
                    }
                    if (System.currentTimeMillis() < j) {
                        return Unit.a;
                    }
                    long currentTimeMillis = j - System.currentTimeMillis();
                    SocialRpcSessionManager$awaitUpdateWindow$next$1 socialRpcSessionManager$awaitUpdateWindow$next$1 = new SocialRpcSessionManager$awaitUpdateWindow$next$1(connection, null);
                    socialRpcSessionManager$awaitUpdateWindow$1.L$0 = connection;
                    socialRpcSessionManager$awaitUpdateWindow$1.L$1 = list;
                    socialRpcSessionManager$awaitUpdateWindow$1.J$0 = j;
                    socialRpcSessionManager$awaitUpdateWindow$1.label = 1;
                    obj = s1.c(currentTimeMillis, socialRpcSessionManager$awaitUpdateWindow$next$1, socialRpcSessionManager$awaitUpdateWindow$1);
                    if (obj == aVar) {
                        return aVar;
                    }
                    String str2 = (String) obj;
                    if (str2 != null) {
                    }
                }
            }
        }
        socialRpcSessionManager$awaitUpdateWindow$1 = new SocialRpcSessionManager$awaitUpdateWindow$1(this, continuation);
        Object obj2 = socialRpcSessionManager$awaitUpdateWindow$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = socialRpcSessionManager$awaitUpdateWindow$1.label;
        if (i5 != 0) {
        }
    }

    private final synchronized void cleanup(String connectionId) {
        Channel channel;
        Connection remove = connections.remove(connectionId);
        if (remove != null && (channel = remove.getChannel()) != null) {
            channel.k(null);
        }
    }

    private final void closeAndCleanup(String connectionId, Connection connection, String message) {
        try {
            q qVar = Result.f13476e;
            connection.getCallback().onClose(1000, message);
            Unit unit = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            ki.b.i(th2);
        }
        cleanup(connectionId);
    }

    private final SocialRpcNetworkConfig configFor(String authToken) {
        SocialRpcNetworkConfig socialRpcNetworkConfig = SocialRpcNetworkConfig.INSTANCE.get();
        if (socialRpcNetworkConfig == null || !Intrinsics.areEqual(socialRpcNetworkConfig.getToken(), authToken)) {
            return null;
        }
        return socialRpcNetworkConfig;
    }

    private final void drain(Connection connection, List<Update> into) {
        while (true) {
            String str = (String) n.a(connection.getChannel().g());
            if (str == null) {
                return;
            } else {
                addParsed(connection, str, into);
            }
        }
    }

    private final void errorActivity(Connection connection, String nonce, String message) {
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "cmd", CMD_SET_ACTIVITY);
        com.facebook.imagepipeline.nativecode.b.B(jsonObjectBuilder, "data", new com.discord.chat.bridge.spoiler.a(message, 7));
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "evt", EVT_ERROR);
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "nonce", nonce);
        sendFrame(connection, jsonObjectBuilder.a().toString());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit errorActivity$lambda$22$lambda$21(String str, JsonObjectBuilder putJsonObject) {
        Intrinsics.checkNotNullParameter(putJsonObject, "$this$putJsonObject");
        com.facebook.imagepipeline.nativecode.b.z(putJsonObject, "code", 1000);
        com.facebook.imagepipeline.nativecode.b.A(putJsonObject, "message", str);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit json$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        Json.a = false;
        return Unit.a;
    }

    private final Update parseSetActivity(Connection connection, String frame) {
        Object i5;
        Object i6;
        try {
            q qVar = Result.f13476e;
            Json json2 = json;
            json2.getClass();
            i5 = (SetActivityFrame) json2.b(SetActivityFrame.INSTANCE.serializer(), frame);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (i5 instanceof fo.r) {
            i5 = null;
        }
        SetActivityFrame setActivityFrame = (SetActivityFrame) i5;
        if (setActivityFrame == null || !Intrinsics.areEqual(setActivityFrame.getCmd(), CMD_SET_ACTIVITY)) {
            return null;
        }
        String nonce = setActivityFrame.getNonce();
        if (nonce == null || nonce.length() <= 0) {
            nonce = null;
        }
        SetActivityFrame.Args args = setActivityFrame.getArgs();
        JsonObject activity = args != null ? args.getActivity() : null;
        if (activity == null) {
            ackActivity(connection, nonce, null);
            return Update.Clear.INSTANCE;
        }
        try {
            i6 = SocialRpcActivityBuilder.INSTANCE.build(String.valueOf(connection.getApplicationId()), null, activity);
        } catch (Throwable th3) {
            q qVar3 = Result.f13476e;
            i6 = ki.b.i(th3);
        }
        if (i6 instanceof fo.r) {
            i6 = null;
        }
        JsonObject jsonObject = (JsonObject) i6;
        if (jsonObject == null) {
            errorActivity(connection, nonce, "invalid activity");
            return null;
        }
        ackActivity(connection, nonce, jsonObject);
        return new Update.Set(jsonObject);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:14:0x012b  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0142  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0155  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00c0  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0163  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x016b  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x013d A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0029  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:51:0x0115 -> B:11:0x011d). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:52:0x014d -> B:23:0x0151). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object runConnection(String str, Connection connection, Continuation continuation) {
        SocialRpcSessionManager$runConnection$1 socialRpcSessionManager$runConnection$1;
        int i5;
        String str2;
        String token;
        ArrayList arrayList;
        long j;
        String str3;
        String str4;
        Object obj;
        ArrayList arrayList2;
        String str5;
        Object obj2;
        SocialRpcNetworkConfig configFor;
        Object obj3;
        Connection connection2 = connection;
        if (continuation instanceof SocialRpcSessionManager$runConnection$1) {
            socialRpcSessionManager$runConnection$1 = (SocialRpcSessionManager$runConnection$1) continuation;
            int i6 = socialRpcSessionManager$runConnection$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                socialRpcSessionManager$runConnection$1.label = i6 - Integer.MIN_VALUE;
                Object obj4 = socialRpcSessionManager$runConnection$1.result;
                Object obj5 = ko.a.f13464d;
                i5 = socialRpcSessionManager$runConnection$1.label;
                int i10 = 2;
                if (i5 != 0) {
                    ki.b.R(obj4);
                    SocialRpcNetworkConfig socialRpcNetworkConfig = SocialRpcNetworkConfig.INSTANCE.get();
                    if (socialRpcNetworkConfig == null) {
                        closeAndCleanup(str, connection2, "Not authenticated");
                        return Unit.a;
                    }
                    str2 = str;
                    token = socialRpcNetworkConfig.getToken();
                    sendReady(connection2, PLACEHOLDER_USER);
                    arrayList = new ArrayList();
                    j = 0;
                    arrayList.clear();
                    Channel channel = connection2.getChannel();
                    socialRpcSessionManager$runConnection$1.L$0 = str2;
                    socialRpcSessionManager$runConnection$1.L$1 = connection2;
                    socialRpcSessionManager$runConnection$1.L$2 = token;
                    socialRpcSessionManager$runConnection$1.L$3 = arrayList;
                    socialRpcSessionManager$runConnection$1.L$4 = null;
                    socialRpcSessionManager$runConnection$1.J$0 = j;
                    socialRpcSessionManager$runConnection$1.label = 1;
                    obj = channel.a(socialRpcSessionManager$runConnection$1);
                    if (obj != obj5) {
                    }
                    return obj5;
                }
                if (i5 != 1) {
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    long j5 = socialRpcSessionManager$runConnection$1.J$0;
                    Update update = (Update) socialRpcSessionManager$runConnection$1.L$4;
                    ArrayList arrayList3 = (ArrayList) socialRpcSessionManager$runConnection$1.L$3;
                    String str6 = (String) socialRpcSessionManager$runConnection$1.L$2;
                    Connection connection3 = (Connection) socialRpcSessionManager$runConnection$1.L$1;
                    String str7 = (String) socialRpcSessionManager$runConnection$1.L$0;
                    ki.b.R(obj4);
                    ListIterator listIterator = arrayList3.listIterator(arrayList3.size());
                    while (true) {
                        if (!listIterator.hasPrevious()) {
                            obj3 = listIterator.previous();
                            Update update2 = (Update) obj3;
                            if ((update2 instanceof Update.Set) || (update2 instanceof Update.Clear)) {
                                break;
                            }
                        } else {
                            obj3 = null;
                            break;
                        }
                    }
                    Update update3 = (Update) obj3;
                    if (update3 == null) {
                        update3 = update;
                    }
                    token = str6;
                    connection2 = connection3;
                    Update update4 = update3;
                    arrayList = arrayList3;
                    j = j5;
                    str2 = str7;
                    boolean z5 = update4 instanceof Update.Set;
                    if (!z5 || (update4 instanceof Update.Clear)) {
                        configFor = configFor(token);
                        if (configFor == null) {
                            closeAndCleanup(str2, connection2, "Authentication changed");
                            return Unit.a;
                        }
                        if (z5) {
                            applyUpdate(connection2, configFor, ((Update.Set) update4).getActivity());
                        } else {
                            if (!(update4 instanceof Update.Clear)) {
                                throw new fo.n();
                            }
                            applyClear(connection2, configFor);
                        }
                        j = System.currentTimeMillis();
                    }
                    i10 = 2;
                    arrayList.clear();
                    Channel channel2 = connection2.getChannel();
                    socialRpcSessionManager$runConnection$1.L$0 = str2;
                    socialRpcSessionManager$runConnection$1.L$1 = connection2;
                    socialRpcSessionManager$runConnection$1.L$2 = token;
                    socialRpcSessionManager$runConnection$1.L$3 = arrayList;
                    socialRpcSessionManager$runConnection$1.L$4 = null;
                    socialRpcSessionManager$runConnection$1.J$0 = j;
                    socialRpcSessionManager$runConnection$1.label = 1;
                    obj = channel2.a(socialRpcSessionManager$runConnection$1);
                    if (obj != obj5) {
                        str4 = token;
                        str3 = str2;
                        arrayList2 = arrayList;
                        SocialRpcSessionManager$runConnection$1 socialRpcSessionManager$runConnection$12 = socialRpcSessionManager$runConnection$1;
                        str5 = (String) n.a(obj);
                        if (str5 != null) {
                            SocialRpcNetworkConfig configFor2 = configFor(str4);
                            if (configFor2 != null) {
                                INSTANCE.applyClear(connection2, configFor2);
                            }
                            cleanup(str3);
                            return Unit.a;
                        }
                        addParsed(connection2, str5, arrayList2);
                        drain(connection2, arrayList2);
                        ListIterator listIterator2 = arrayList2.listIterator(arrayList2.size());
                        while (true) {
                            if (!listIterator2.hasPrevious()) {
                                obj2 = null;
                                break;
                            }
                            obj2 = listIterator2.previous();
                            Update update5 = (Update) obj2;
                            if ((update5 instanceof Update.Set) || (update5 instanceof Update.Clear)) {
                                break;
                            }
                        }
                        update4 = (Update) obj2;
                        if (update4 instanceof Update.Set) {
                            long j7 = MIN_UPDATE_INTERVAL_MS + j;
                            socialRpcSessionManager$runConnection$12.L$0 = str3;
                            socialRpcSessionManager$runConnection$12.L$1 = connection2;
                            socialRpcSessionManager$runConnection$12.L$2 = str4;
                            socialRpcSessionManager$runConnection$12.L$3 = arrayList2;
                            socialRpcSessionManager$runConnection$12.L$4 = update4;
                            socialRpcSessionManager$runConnection$12.J$0 = j;
                            socialRpcSessionManager$runConnection$12.label = i10;
                            if (awaitUpdateWindow(connection2, arrayList2, j7, socialRpcSessionManager$runConnection$12) != obj5) {
                                connection3 = connection2;
                                update = update4;
                                socialRpcSessionManager$runConnection$1 = socialRpcSessionManager$runConnection$12;
                                j5 = j;
                                str6 = str4;
                                str7 = str3;
                                arrayList3 = arrayList2;
                                ListIterator listIterator3 = arrayList3.listIterator(arrayList3.size());
                                while (true) {
                                    if (!listIterator3.hasPrevious()) {
                                    }
                                }
                                Update update32 = (Update) obj3;
                                if (update32 == null) {
                                }
                                token = str6;
                                connection2 = connection3;
                                Update update42 = update32;
                                arrayList = arrayList3;
                                j = j5;
                                str2 = str7;
                                boolean z52 = update42 instanceof Update.Set;
                                if (!z52) {
                                }
                                configFor = configFor(token);
                                if (configFor == null) {
                                }
                            }
                        } else {
                            socialRpcSessionManager$runConnection$1 = socialRpcSessionManager$runConnection$12;
                            str2 = str3;
                            arrayList = arrayList2;
                            token = str4;
                            boolean z522 = update42 instanceof Update.Set;
                            if (!z522) {
                            }
                            configFor = configFor(token);
                            if (configFor == null) {
                            }
                        }
                    }
                    return obj5;
                }
                long j10 = socialRpcSessionManager$runConnection$1.J$0;
                ArrayList arrayList4 = (ArrayList) socialRpcSessionManager$runConnection$1.L$3;
                String str8 = (String) socialRpcSessionManager$runConnection$1.L$2;
                Connection connection4 = (Connection) socialRpcSessionManager$runConnection$1.L$1;
                String str9 = (String) socialRpcSessionManager$runConnection$1.L$0;
                ki.b.R(obj4);
                str4 = str8;
                str3 = str9;
                obj = ((n) obj4).a;
                arrayList2 = arrayList4;
                connection2 = connection4;
                j = j10;
                SocialRpcSessionManager$runConnection$1 socialRpcSessionManager$runConnection$122 = socialRpcSessionManager$runConnection$1;
                str5 = (String) n.a(obj);
                if (str5 != null) {
                }
            }
        }
        socialRpcSessionManager$runConnection$1 = new SocialRpcSessionManager$runConnection$1(this, continuation);
        Object obj42 = socialRpcSessionManager$runConnection$1.result;
        Object obj52 = ko.a.f13464d;
        i5 = socialRpcSessionManager$runConnection$1.label;
        int i102 = 2;
        if (i5 != 0) {
        }
    }

    private final void sendFrame(Connection connection, String frame) {
        try {
            q qVar = Result.f13476e;
            connection.getCallback().onFrame(frame);
            Unit unit = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            ki.b.i(th2);
        }
    }

    private final void sendReady(Connection connection, JsonObject user) {
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "cmd", CMD_DISPATCH);
        com.facebook.imagepipeline.nativecode.b.A(jsonObjectBuilder, "evt", EVT_READY);
        jsonObjectBuilder.b("nonce", JsonNull.INSTANCE);
        com.facebook.imagepipeline.nativecode.b.B(jsonObjectBuilder, "data", new e1(26, user));
        sendFrame(connection, jsonObjectBuilder.a().toString());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit sendReady$lambda$16$lambda$15(JsonObject jsonObject, JsonObjectBuilder putJsonObject) {
        Intrinsics.checkNotNullParameter(putJsonObject, "$this$putJsonObject");
        com.facebook.imagepipeline.nativecode.b.z(putJsonObject, "v", 1);
        com.facebook.imagepipeline.nativecode.b.B(putJsonObject, "config", new b(3));
        putJsonObject.b("user", jsonObject);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit sendReady$lambda$16$lambda$15$lambda$14(JsonObjectBuilder putJsonObject) {
        Intrinsics.checkNotNullParameter(putJsonObject, "$this$putJsonObject");
        return Unit.a;
    }

    public final synchronized boolean onConnect(@NotNull String connectionId, long applicationId, @NotNull String version, @NotNull IDiscordRpcCallback callback) {
        Intrinsics.checkNotNullParameter(connectionId, "connectionId");
        Intrinsics.checkNotNullParameter(version, "version");
        Intrinsics.checkNotNullParameter(callback, "callback");
        HashMap<String, Connection> hashMap = connections;
        if (hashMap.size() >= 10) {
            return false;
        }
        Connection connection = new Connection(applicationId, version, callback);
        hashMap.put(connectionId, connection);
        x.t(scope, null, new SocialRpcSessionManager$onConnect$1(connectionId, connection, null), 3);
        return true;
    }

    public final void onDisconnect(@NotNull String connectionId) {
        Connection connection;
        Intrinsics.checkNotNullParameter(connectionId, "connectionId");
        synchronized (this) {
            connection = connections.get(connectionId);
        }
        if (connection == null) {
            return;
        }
        connection.getChannel().k(null);
    }

    public final void onFrame(@NotNull String connectionId, @NotNull String frame) {
        Connection connection;
        Intrinsics.checkNotNullParameter(connectionId, "connectionId");
        Intrinsics.checkNotNullParameter(frame, "frame");
        synchronized (this) {
            connection = connections.get(connectionId);
        }
        if (connection == null) {
            return;
        }
        connection.getChannel().n(frame);
    }
}
