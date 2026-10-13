package com.discord.chat;

import android.content.Context;
import com.discord.chat.listmanager.ChatListManager;
import com.discord.chatreplay.logger.ReleaseRowLogger;
import com.discord.chatreplay.logger.RowLogger;
import com.discord.codegen.NativeChatModuleSpec;
import com.discord.tti_manager.TTIMetrics;
import com.facebook.react.bridge.ReactApplicationContext;
import d9.a;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.e;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import nr.m1;
import nr.q0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\b\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016JJ\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0010\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\u000e2\u0006\u0010\u0013\u001a\u00020\u000eH\u0016J\u0018\u0010\u0014\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u0010\u001a\u00020\nH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/discord/chat/ChatModule;", "Lcom/discord/codegen/NativeChatModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "invalidate", "", "updateRows", "tagValue", "", "rowsJSON", "", "isLoadingAtTop", "", "scrollDataJSON", "changesetUpdateIdValue", "HACK_iOSForceAnimations", "forceReload", "isAnimated", "clearRows", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChatModule extends NativeChatModuleSpec {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Json json = a.c(new ab.a(21));

    @NotNull
    private static final Map<Integer, ChatListManager> listManagers;

    @NotNull
    private static final CoroutineScope moduleScope;
    private static int previousRowUpdateTag;

    @NotNull
    private static final Map<Integer, RowLogger> rowUpdateLoggers;

    @NotNull
    private final ReactApplicationContext reactContext;

    @Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\b\u0006\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J;\u0010\u000b\u001a\u00020\t2\u0006\u0010\u0005\u001a\u00020\u00042\"\u0010\n\u001a\u001e\b\u0001\u0012\u0004\u0012\u00020\u0007\u0012\n\u0012\b\u0012\u0004\u0012\u00020\t0\b\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0006H\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u001f\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\r2\u0006\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0010\u0010\u0011J\u000f\u0010\u0012\u001a\u00020\tH\u0002¢\u0006\u0004\b\u0012\u0010\u0003J\u0015\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0016\u001a\u00020\u00158\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0016\u0010\u0017R\u0014\u0010\u0019\u001a\u00020\u00188\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0019\u0010\u001aR \u0010\u001c\u001a\u000e\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u00070\u001b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u001c\u0010\u001dR\u0016\u0010\u001e\u001a\u00020\u00048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001e\u0010\u001fR \u0010 \u001a\u000e\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u000f0\u001b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b \u0010\u001d¨\u0006!"}, d2 = {"Lcom/discord/chat/ChatModule$Companion;", "", "<init>", "()V", "", "tag", "Lkotlin/Function2;", "Lcom/discord/chat/listmanager/ChatListManager;", "Lkotlin/coroutines/Continuation;", "", "block", "withChatManager", "(ILkotlin/jvm/functions/Function2;)V", "Landroid/content/Context;", "context", "Lcom/discord/chatreplay/logger/RowLogger;", "rowUpdateLoggerFor", "(Landroid/content/Context;I)Lcom/discord/chatreplay/logger/RowLogger;", "cancelCoroutineChildren", "getChatListManager", "(I)Lcom/discord/chat/listmanager/ChatListManager;", "Lkotlinx/serialization/json/Json;", "json", "Lkotlinx/serialization/json/Json;", "Lkotlinx/coroutines/CoroutineScope;", "moduleScope", "Lkotlinx/coroutines/CoroutineScope;", "", "listManagers", "Ljava/util/Map;", "previousRowUpdateTag", "I", "rowUpdateLoggers", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nChatModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatModule.kt\ncom/discord/chat/ChatModule$Companion\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,194:1\n384#2,7:195\n384#2,7:202\n*S KotlinDebug\n*F\n+ 1 ChatModule.kt\ncom/discord/chat/ChatModule$Companion\n*L\n159#1:195,7\n173#1:202,7\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void cancelCoroutineChildren() {
            x.h(ChatModule.moduleScope.getCoroutineContext(), new CancellationException(d.k(Reflection.getOrCreateKotlinClass(ChatModule.class).getSimpleName(), " invalidate()")));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final RowLogger rowUpdateLoggerFor(Context context, int tag) {
            Map map = ChatModule.rowUpdateLoggers;
            Integer valueOf = Integer.valueOf(tag);
            Object obj = map.get(valueOf);
            if (obj == null) {
                obj = new ReleaseRowLogger();
                map.put(valueOf, obj);
            }
            return (RowLogger) obj;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void withChatManager(int tag, Function2<? super ChatListManager, ? super Continuation, ? extends Object> block) {
            x.t(ChatModule.moduleScope, null, new ChatModule$Companion$withChatManager$1(block, getChatListManager(tag), null), 3);
        }

        @NotNull
        public final synchronized ChatListManager getChatListManager(int tag) {
            Object obj;
            try {
                Map map = ChatModule.listManagers;
                Integer valueOf = Integer.valueOf(tag);
                obj = map.get(valueOf);
                if (obj == null) {
                    obj = new ChatListManager(ChatModule.moduleScope);
                    map.put(valueOf, obj);
                }
            } catch (Throwable th2) {
                throw th2;
            }
            return (ChatListManager) obj;
        }

        private Companion() {
        }
    }

    static {
        m1 m1Var = new m1();
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        Intrinsics.checkNotNullExpressionValue(newSingleThreadExecutor, "newSingleThreadExecutor(...)");
        moduleScope = x.b(e.c(m1Var, new q0(newSingleThreadExecutor)));
        listManagers = new LinkedHashMap();
        previousRowUpdateTag = -1;
        rowUpdateLoggers = new LinkedHashMap();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit json$lambda$0(JsonBuilder Json) {
        Intrinsics.checkNotNullParameter(Json, "$this$Json");
        Json.f13609b = true;
        return Unit.a;
    }

    @Override // com.discord.codegen.NativeChatModuleSpec
    public void clearRows(double tagValue, double changesetUpdateIdValue) {
        int i5 = (int) tagValue;
        INSTANCE.withChatManager(i5, new ChatModule$clearRows$1(this, i5, (int) changesetUpdateIdValue, null));
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        INSTANCE.cancelCoroutineChildren();
    }

    @Override // com.discord.codegen.NativeChatModuleSpec
    public void updateRows(double tagValue, @NotNull String rowsJSON, boolean isLoadingAtTop, String scrollDataJSON, double changesetUpdateIdValue, boolean HACK_iOSForceAnimations, boolean forceReload, boolean isAnimated) {
        Intrinsics.checkNotNullParameter(rowsJSON, "rowsJSON");
        int i5 = (int) tagValue;
        TTIMetrics.record$default(TTIMetrics.INSTANCE, "ChatModule.updateRows() Start", 0L, null, false, 14, null);
        INSTANCE.withChatManager(i5, new ChatModule$updateRows$1(this, i5, rowsJSON, scrollDataJSON, (int) changesetUpdateIdValue, forceReload, null));
    }
}
