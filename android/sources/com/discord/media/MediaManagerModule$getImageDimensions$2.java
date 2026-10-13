package com.discord.media;

import android.graphics.BitmapFactory;
import android.net.Uri;
import com.discord.logging.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import java.io.InputStream;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\u0010\u0000\u001a\u0010\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u0002\u0018\u00010\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.MediaManagerModule$getImageDimensions$2", f = "MediaManagerModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$getImageDimensions$2\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,702:1\n29#2:703\n*S KotlinDebug\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule$getImageDimensions$2\n*L\n657#1:703\n*E\n"})
/* loaded from: classes.dex */
public final class MediaManagerModule$getImageDimensions$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $uri;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$getImageDimensions$2(String str, MediaManagerModule mediaManagerModule, Continuation continuation) {
        super(2, continuation);
        this.$uri = str;
        this.this$0 = mediaManagerModule;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaManagerModule$getImageDimensions$2(this.$uri, this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ReactApplicationContext reactApplicationContext;
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
                BitmapFactory.Options options = new BitmapFactory.Options();
                options.inJustDecodeBounds = true;
                BitmapFactory.decodeStream(openInputStream, null, options);
                int i5 = options.outWidth;
                Pair pair = (i5 <= 0 || options.outHeight <= 0) ? null : new Pair(new Integer(i5), new Integer(options.outHeight));
                openInputStream.close();
                return pair;
            } finally {
            }
        } catch (Exception e9) {
            Log.INSTANCE.e("MediaManagerModule", "Failed to get image dimensions from URI: " + this.$uri, e9);
            return null;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$getImageDimensions$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
