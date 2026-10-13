package com.discord.media.engine;

import com.discord.media.engine.video.events.FirstFrameCallbackEvent;
import com.discord.media.engine.video.events.MlsFailureCallbackEvent;
import com.discord.media.engine.video.events.PingCallbackEvent;
import com.discord.media.engine.video.events.PingTimeoutCallbackEvent;
import com.discord.media.engine.video.events.SecureFramesStateUpdateCallbackEvent;
import com.discord.media.engine.video.events.SpeakingWhileMutedCallbackEvent;
import com.discord.media.engine.video.events.UserSpeakingEvent;
import com.discord.reactevents.ReactEvents;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.functions.Function4;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$addConnectionCallbacks$1", f = "MediaEngineModule.kt", l = {421}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$addConnectionCallbacks$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ int $connectionId;
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$addConnectionCallbacks$1(MediaEngineModule mediaEngineModule, int i5, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
        this.$connectionId = i5;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(MediaEngineModule mediaEngineModule, int i5, String str, int i6, float f2) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new UserSpeakingEvent(i5, str, i6, f2));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$1(MediaEngineModule mediaEngineModule, int i5, int i6, String str, int i10, int i11) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new PingCallbackEvent(i5, i6, str, i10, i11));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$2(MediaEngineModule mediaEngineModule, int i5, String str, int i6, int i10, int i11) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new PingTimeoutCallbackEvent(i5, str, i6, i10, i11));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$3(MediaEngineModule mediaEngineModule, int i5) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new SpeakingWhileMutedCallbackEvent(i5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$4(MediaEngineModule mediaEngineModule, int i5, String str, long j, String str2) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new FirstFrameCallbackEvent(i5, str, j, str2));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$5(MediaEngineModule mediaEngineModule, int i5, String str, String str2) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new MlsFailureCallbackEvent(i5, str, str2));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$6(MediaEngineModule mediaEngineModule, int i5, String str) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new SecureFramesStateUpdateCallbackEvent(i5, str));
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$addConnectionCallbacks$1(this.this$0, this.$connectionId, continuation);
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
        MediaEngine mediaEngine = this.this$0.getMediaEngine();
        final int i6 = this.$connectionId;
        final MediaEngineModule mediaEngineModule2 = this.this$0;
        final int i10 = 0;
        mediaEngine.connectionInstanceSetOnSpeakingCallback$media_engine_release(i6, new Function3() { // from class: com.discord.media.engine.g
            @Override // kotlin.jvm.functions.Function3
            public final Object invoke(Object obj2, Object obj3, Object obj4) {
                Unit invokeSuspend$lambda$0;
                Unit invokeSuspend$lambda$4;
                switch (i10) {
                    case 0:
                        int intValue = ((Integer) obj3).intValue();
                        float floatValue = ((Float) obj4).floatValue();
                        invokeSuspend$lambda$0 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$0(mediaEngineModule2, i6, (String) obj2, intValue, floatValue);
                        return invokeSuspend$lambda$0;
                    default:
                        invokeSuspend$lambda$4 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$4(mediaEngineModule2, i6, (String) obj2, ((Long) obj3).longValue(), (String) obj4);
                        return invokeSuspend$lambda$4;
                }
            }
        });
        MediaEngine mediaEngine2 = this.this$0.getMediaEngine();
        final int i11 = this.$connectionId;
        final MediaEngineModule mediaEngineModule3 = this.this$0;
        mediaEngine2.connectionInstanceSetOnPingCallback$media_engine_release(i11, new Function4() { // from class: com.discord.media.engine.h
            @Override // kotlin.jvm.functions.Function4
            public final Object invoke(Object obj2, Object obj3, Object obj4, Object obj5) {
                Unit invokeSuspend$lambda$1;
                Unit invokeSuspend$lambda$2;
                switch (i10) {
                    case 0:
                        int intValue = ((Integer) obj4).intValue();
                        int intValue2 = ((Integer) obj5).intValue();
                        invokeSuspend$lambda$1 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$1(mediaEngineModule3, i11, ((Integer) obj2).intValue(), (String) obj3, intValue, intValue2);
                        return invokeSuspend$lambda$1;
                    default:
                        int intValue3 = ((Integer) obj3).intValue();
                        int intValue4 = ((Integer) obj4).intValue();
                        int intValue5 = ((Integer) obj5).intValue();
                        invokeSuspend$lambda$2 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$2(mediaEngineModule3, i11, (String) obj2, intValue3, intValue4, intValue5);
                        return invokeSuspend$lambda$2;
                }
            }
        });
        MediaEngine mediaEngine3 = this.this$0.getMediaEngine();
        final int i12 = this.$connectionId;
        final MediaEngineModule mediaEngineModule4 = this.this$0;
        final int i13 = 1;
        mediaEngine3.connectionInstanceSetOnPingTimeoutCallback$media_engine_release(i12, new Function4() { // from class: com.discord.media.engine.h
            @Override // kotlin.jvm.functions.Function4
            public final Object invoke(Object obj2, Object obj3, Object obj4, Object obj5) {
                Unit invokeSuspend$lambda$1;
                Unit invokeSuspend$lambda$2;
                switch (i13) {
                    case 0:
                        int intValue = ((Integer) obj4).intValue();
                        int intValue2 = ((Integer) obj5).intValue();
                        invokeSuspend$lambda$1 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$1(mediaEngineModule4, i12, ((Integer) obj2).intValue(), (String) obj3, intValue, intValue2);
                        return invokeSuspend$lambda$1;
                    default:
                        int intValue3 = ((Integer) obj3).intValue();
                        int intValue4 = ((Integer) obj4).intValue();
                        int intValue5 = ((Integer) obj5).intValue();
                        invokeSuspend$lambda$2 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$2(mediaEngineModule4, i12, (String) obj2, intValue3, intValue4, intValue5);
                        return invokeSuspend$lambda$2;
                }
            }
        });
        MediaEngine mediaEngine4 = this.this$0.getMediaEngine();
        final int i14 = this.$connectionId;
        final MediaEngineModule mediaEngineModule5 = this.this$0;
        mediaEngine4.connectionInstanceSetOnSpeakingWhileMutedCallback$media_engine_release(i14, new Function0() { // from class: com.discord.media.engine.i
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit invokeSuspend$lambda$3;
                invokeSuspend$lambda$3 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$3(MediaEngineModule.this, i14);
                return invokeSuspend$lambda$3;
            }
        });
        MediaEngine mediaEngine5 = this.this$0.getMediaEngine();
        final int i15 = this.$connectionId;
        final MediaEngineModule mediaEngineModule6 = this.this$0;
        mediaEngine5.connectionInstanceSetOnFirstFrameCallback$media_engine_release(i15, new Function3() { // from class: com.discord.media.engine.g
            @Override // kotlin.jvm.functions.Function3
            public final Object invoke(Object obj2, Object obj3, Object obj4) {
                Unit invokeSuspend$lambda$0;
                Unit invokeSuspend$lambda$4;
                switch (i13) {
                    case 0:
                        int intValue = ((Integer) obj3).intValue();
                        float floatValue = ((Float) obj4).floatValue();
                        invokeSuspend$lambda$0 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$0(mediaEngineModule6, i15, (String) obj2, intValue, floatValue);
                        return invokeSuspend$lambda$0;
                    default:
                        invokeSuspend$lambda$4 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$4(mediaEngineModule6, i15, (String) obj2, ((Long) obj3).longValue(), (String) obj4);
                        return invokeSuspend$lambda$4;
                }
            }
        });
        MediaEngine mediaEngine6 = this.this$0.getMediaEngine();
        final int i16 = this.$connectionId;
        final MediaEngineModule mediaEngineModule7 = this.this$0;
        mediaEngine6.connectionInstanceSetOnMLSFailureCallback$media_engine_release(i16, new Function2() { // from class: com.discord.media.engine.j
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Unit invokeSuspend$lambda$5;
                invokeSuspend$lambda$5 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$5(MediaEngineModule.this, i16, (String) obj2, (String) obj3);
                return invokeSuspend$lambda$5;
            }
        });
        MediaEngine mediaEngine7 = this.this$0.getMediaEngine();
        final int i17 = this.$connectionId;
        final MediaEngineModule mediaEngineModule8 = this.this$0;
        mediaEngine7.connectionInstanceSetSecureFramesStateUpdateCallback$media_engine_release(i17, new Function1() { // from class: com.discord.media.engine.k
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj2) {
                Unit invokeSuspend$lambda$6;
                invokeSuspend$lambda$6 = MediaEngineModule$addConnectionCallbacks$1.invokeSuspend$lambda$6(MediaEngineModule.this, i17, (String) obj2);
                return invokeSuspend$lambda$6;
            }
        });
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$addConnectionCallbacks$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
