package com.discord.media.engine;

import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.ReadableMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$createConnection$1", f = "MediaEngineModule.kt", l = {517}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$createConnection$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Function2<String, Map<String, ? extends Object>, Unit> $callback;
    final /* synthetic */ int $connectionId;
    final /* synthetic */ ReadableMap $connectionOptions;
    final /* synthetic */ String $userId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public MediaEngineModule$createConnection$1(MediaEngineModule mediaEngineModule, int i5, String str, ReadableMap readableMap, Function2<? super String, ? super Map<String, ? extends Object>, Unit> function2, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = i5;
        this.$userId = str;
        this.$connectionOptions = readableMap;
        this.$callback = function2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$createConnection$1(this.this$0, this.$connectionId, this.$userId, this.$connectionOptions, this.$callback, continuation);
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
        this.this$0.getMediaEngine().createVoiceConnection(this.$connectionId, this.$userId, NativeMapExtensionsKt.toJsonString(this.$connectionOptions), this.$callback);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$createConnection$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
