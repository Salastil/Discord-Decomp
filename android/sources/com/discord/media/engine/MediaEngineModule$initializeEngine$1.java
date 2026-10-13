package com.discord.media.engine;

import com.discord.media.engine.video.events.ActiveSinksChangeEvent;
import com.discord.media.engine.video.events.AudioInputInitializedEvent;
import com.discord.media.engine.video.events.DeviceChangedEvent;
import com.discord.media.engine.video.events.NoInputCallbackEvent;
import com.discord.media.engine.video.events.OnVoiceEvent;
import com.discord.media.engine.video.events.VoiceProcessingErrorCallbackEvent;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ActivityEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media.engine.MediaEngineModule$initializeEngine$1", f = "MediaEngineModule.kt", l = {117}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaEngineModule$initializeEngine$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ MediaEngineModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule$initializeEngine$1(MediaEngineModule mediaEngineModule, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaEngineModule;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(MediaEngineModule mediaEngineModule, boolean z5) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new NoInputCallbackEvent(z5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$1(MediaEngineModule mediaEngineModule, float f2, int i5) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new OnVoiceEvent(f2, i5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$2(MediaEngineModule mediaEngineModule, String str, boolean z5) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new ActiveSinksChangeEvent(str, z5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$3(MediaEngineModule mediaEngineModule, List list, List list2, List list3) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new DeviceChangedEvent(list, list2, list3));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$4(MediaEngineModule mediaEngineModule, double d6, Map map) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new AudioInputInitializedEvent(d6, map));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$5(MediaEngineModule mediaEngineModule, int i5) {
        ReactEvents reactEvents;
        reactEvents = mediaEngineModule.reactEvents;
        reactEvents.emitModuleEvent(mediaEngineModule.getReactContext(), new VoiceProcessingErrorCallbackEvent(i5));
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaEngineModule$initializeEngine$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object awaitMediaEngine;
        ActivityEventListener activityEventListener;
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
        final MediaEngineModule mediaEngineModule2 = this.this$0;
        final int i6 = 0;
        mediaEngine.setOnNoInputCallback$media_engine_release(new Function1() { // from class: com.discord.media.engine.t
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj2) {
                Unit invokeSuspend$lambda$0;
                Unit invokeSuspend$lambda$5;
                switch (i6) {
                    case 0:
                        invokeSuspend$lambda$0 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$0(mediaEngineModule2, ((Boolean) obj2).booleanValue());
                        return invokeSuspend$lambda$0;
                    default:
                        invokeSuspend$lambda$5 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$5(mediaEngineModule2, ((Integer) obj2).intValue());
                        return invokeSuspend$lambda$5;
                }
            }
        });
        MediaEngine mediaEngine2 = this.this$0.getMediaEngine();
        final MediaEngineModule mediaEngineModule3 = this.this$0;
        mediaEngine2.setOnVoiceCallback$media_engine_release(new Function2() { // from class: com.discord.media.engine.u
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Unit invokeSuspend$lambda$1;
                Unit invokeSuspend$lambda$2;
                Unit invokeSuspend$lambda$4;
                switch (i6) {
                    case 0:
                        invokeSuspend$lambda$1 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$1(mediaEngineModule3, ((Float) obj2).floatValue(), ((Integer) obj3).intValue());
                        return invokeSuspend$lambda$1;
                    case 1:
                        boolean booleanValue = ((Boolean) obj3).booleanValue();
                        invokeSuspend$lambda$2 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$2(mediaEngineModule3, (String) obj2, booleanValue);
                        return invokeSuspend$lambda$2;
                    default:
                        invokeSuspend$lambda$4 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$4(mediaEngineModule3, ((Double) obj2).doubleValue(), (Map) obj3);
                        return invokeSuspend$lambda$4;
                }
            }
        });
        MediaEngine mediaEngine3 = this.this$0.getMediaEngine();
        final MediaEngineModule mediaEngineModule4 = this.this$0;
        final int i10 = 1;
        mediaEngine3.setActiveSinksChangeCallback$media_engine_release(new Function2() { // from class: com.discord.media.engine.u
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Unit invokeSuspend$lambda$1;
                Unit invokeSuspend$lambda$2;
                Unit invokeSuspend$lambda$4;
                switch (i10) {
                    case 0:
                        invokeSuspend$lambda$1 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$1(mediaEngineModule4, ((Float) obj2).floatValue(), ((Integer) obj3).intValue());
                        return invokeSuspend$lambda$1;
                    case 1:
                        boolean booleanValue = ((Boolean) obj3).booleanValue();
                        invokeSuspend$lambda$2 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$2(mediaEngineModule4, (String) obj2, booleanValue);
                        return invokeSuspend$lambda$2;
                    default:
                        invokeSuspend$lambda$4 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$4(mediaEngineModule4, ((Double) obj2).doubleValue(), (Map) obj3);
                        return invokeSuspend$lambda$4;
                }
            }
        });
        final int i11 = 2;
        this.this$0.getMediaEngine().setDeviceChangeCallback$media_engine_release(new m(i11, this.this$0));
        MediaEngine mediaEngine4 = this.this$0.getMediaEngine();
        final MediaEngineModule mediaEngineModule5 = this.this$0;
        mediaEngine4.setAudioInputInitializationCallback$media_engine_release(new Function2() { // from class: com.discord.media.engine.u
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj2, Object obj3) {
                Unit invokeSuspend$lambda$1;
                Unit invokeSuspend$lambda$2;
                Unit invokeSuspend$lambda$4;
                switch (i11) {
                    case 0:
                        invokeSuspend$lambda$1 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$1(mediaEngineModule5, ((Float) obj2).floatValue(), ((Integer) obj3).intValue());
                        return invokeSuspend$lambda$1;
                    case 1:
                        boolean booleanValue = ((Boolean) obj3).booleanValue();
                        invokeSuspend$lambda$2 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$2(mediaEngineModule5, (String) obj2, booleanValue);
                        return invokeSuspend$lambda$2;
                    default:
                        invokeSuspend$lambda$4 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$4(mediaEngineModule5, ((Double) obj2).doubleValue(), (Map) obj3);
                        return invokeSuspend$lambda$4;
                }
            }
        });
        MediaEngine mediaEngine5 = this.this$0.getMediaEngine();
        final MediaEngineModule mediaEngineModule6 = this.this$0;
        final int i12 = 1;
        mediaEngine5.setVoiceProcessingErrorCallback$media_engine_release(new Function1() { // from class: com.discord.media.engine.t
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj2) {
                Unit invokeSuspend$lambda$0;
                Unit invokeSuspend$lambda$5;
                switch (i12) {
                    case 0:
                        invokeSuspend$lambda$0 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$0(mediaEngineModule6, ((Boolean) obj2).booleanValue());
                        return invokeSuspend$lambda$0;
                    default:
                        invokeSuspend$lambda$5 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$5(mediaEngineModule6, ((Integer) obj2).intValue());
                        return invokeSuspend$lambda$5;
                }
            }
        });
        ReactApplicationContext reactContext = this.this$0.getReactContext();
        activityEventListener = this.this$0.activityEventListener;
        reactContext.addActivityEventListener(activityEventListener);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaEngineModule$initializeEngine$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
