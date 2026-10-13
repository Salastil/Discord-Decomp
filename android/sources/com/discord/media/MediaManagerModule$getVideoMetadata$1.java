package com.discord.media;

import android.net.Uri;
import com.discord.media.utils.MediaResolver;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.WritableMap;
import fo.q;
import java.util.Map;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.MediaManagerModule$getVideoMetadata$1", f = "MediaManagerModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$getVideoMetadata$1\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,702:1\n216#2,2:703\n*S KotlinDebug\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$getVideoMetadata$1\n*L\n200#1:703,2\n*E\n"})
/* loaded from: classes.dex */
public final class MediaManagerModule$getVideoMetadata$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Uri $inputUri;
    final /* synthetic */ Promise $promise;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$getVideoMetadata$1(MediaManagerModule mediaManagerModule, Uri uri, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaManagerModule;
        this.$inputUri = uri;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        MediaManagerModule$getVideoMetadata$1 mediaManagerModule$getVideoMetadata$1 = new MediaManagerModule$getVideoMetadata$1(this.this$0, this.$inputUri, this.$promise, continuation);
        mediaManagerModule$getVideoMetadata$1.L$0 = obj;
        return mediaManagerModule$getVideoMetadata$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object i5;
        MediaResolver mediaResolver;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        MediaManagerModule mediaManagerModule = this.this$0;
        Uri uri = this.$inputUri;
        Promise promise = this.$promise;
        try {
            q qVar = Result.f13476e;
            mediaResolver = mediaManagerModule.mediaResolver;
            Map<String, Object> handleVideoMetadata = mediaResolver.handleVideoMetadata(uri);
            WritableMap createMap = Arguments.createMap();
            for (Map.Entry<String, Object> entry : handleVideoMetadata.entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();
                if (value instanceof Integer) {
                    createMap.putInt(key, ((Number) value).intValue());
                } else if (value instanceof Boolean) {
                    createMap.putBoolean(key, ((Boolean) value).booleanValue());
                } else {
                    if (!(value instanceof String)) {
                        throw new IllegalArgumentException("Unsupported value type " + value.getClass().getName() + " for key [" + key + "]");
                    }
                    createMap.putString(key, (String) value);
                }
            }
            promise.resolve(createMap);
            i5 = Unit.a;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        Promise promise2 = this.$promise;
        Throwable a = Result.a(i5);
        if (a != null) {
            promise2.reject(a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$getVideoMetadata$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
