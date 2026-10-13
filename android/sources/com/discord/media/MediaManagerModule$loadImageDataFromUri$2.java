package com.discord.media;

import android.net.Uri;
import com.discord.logging.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import java.io.InputStream;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0012\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.MediaManagerModule$loadImageDataFromUri$2", f = "MediaManagerModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$loadImageDataFromUri$2\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,702:1\n29#2:703\n*S KotlinDebug\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$loadImageDataFromUri$2\n*L\n678#1:703\n*E\n"})
/* loaded from: classes.dex */
public final class MediaManagerModule$loadImageDataFromUri$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $uri;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$loadImageDataFromUri$2(String str, MediaManagerModule mediaManagerModule, Continuation continuation) {
        super(2, continuation);
        this.$uri = str;
        this.this$0 = mediaManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaManagerModule$loadImageDataFromUri$2(this.$uri, this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ReactApplicationContext reactApplicationContext;
        int i5;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            Uri parse = Uri.parse(this.$uri);
            reactApplicationContext = this.this$0.getReactApplicationContext();
            InputStream openInputStream = reactApplicationContext.getContentResolver().openInputStream(parse);
            if (openInputStream == null) {
                return null;
            }
            try {
                try {
                    i5 = openInputStream.available();
                } catch (Exception unused) {
                    i5 = 0;
                }
                if (i5 <= 52428800) {
                    byte[] E = com.facebook.imagepipeline.nativecode.b.E(openInputStream);
                    openInputStream.close();
                    return E;
                }
                Log.w$default(Log.INSTANCE, "MediaManagerModule", "Image file too large: " + i5 + " bytes (max: 52428800)", (Throwable) null, 4, (Object) null);
                openInputStream.close();
                return null;
            } finally {
            }
        } catch (Exception e9) {
            Log.INSTANCE.e("MediaManagerModule", "Failed to load image data from URI: " + this.$uri, e9);
            return null;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$loadImageDataFromUri$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
