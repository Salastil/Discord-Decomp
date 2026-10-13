package com.discord.media.engine;

import android.content.Intent;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReadableMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$createOwnStreamConnectionWithOptions$1", f = "MediaEngineModule.kt", l = {493}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$createOwnStreamConnectionWithOptions$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Callback $callback;
    final /* synthetic */ double $connectionId;
    final /* synthetic */ ReadableMap $connectionOptions;
    final /* synthetic */ String $userId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$createOwnStreamConnectionWithOptions$1(MediaEngineModule mediaEngineModule, double d6, String str, ReadableMap readableMap, Callback callback, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = d6;
        this.$userId = str;
        this.$connectionOptions = readableMap;
        this.$callback = callback;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$1(Callback callback, MediaEngineModule mediaEngineModule, double d6, String str, Map map) {
        Intent intent;
        callback.invoke(str, NativeMapExtensionsKt.toNativeMap(map));
        intent = mediaEngineModule.streamPermissions;
        if (intent != null) {
            mediaEngineModule.getMediaEngine().connectionInstanceStartBroadcast$media_engine_release((int) d6, intent);
            mediaEngineModule.streamPermissions = null;
        }
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$createOwnStreamConnectionWithOptions$1(this.this$0, this.$connectionId, this.$userId, this.$connectionOptions, this.$callback, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object awaitMediaEngine;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            MediaEngineModule mediaEngineModule = this.this$0;
            this.label = 1;
            awaitMediaEngine = mediaEngineModule.awaitMediaEngine(this);
            if (awaitMediaEngine == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        final MediaEngineModule mediaEngineModule2 = this.this$0;
        final double d6 = this.$connectionId;
        String str = this.$userId;
        ReadableMap readableMap = this.$connectionOptions;
        final Callback callback = this.$callback;
        mediaEngineModule2.createConnection((int) d6, str, readableMap, new Function2() { // from class: com.discord.media.engine.q
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Unit invokeSuspend$lambda$1;
                invokeSuspend$lambda$1 = MediaEngineModule$createOwnStreamConnectionWithOptions$1.invokeSuspend$lambda$1(Callback.this, mediaEngineModule2, d6, (String) obj2, (Map) obj3);
                return invokeSuspend$lambda$1;
            }
        });
        this.this$0.streamConnectionId = new Integer((int) this.$connectionId);
        this.this$0.addConnectionCallbacks((int) this.$connectionId);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$createOwnStreamConnectionWithOptions$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
