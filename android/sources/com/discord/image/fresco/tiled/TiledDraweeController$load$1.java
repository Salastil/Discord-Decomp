package com.discord.image.fresco.tiled;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import com.facebook.common.references.CloseableReference;
import com.facebook.datasource.DataSource;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.imagepipeline.request.ImageRequest;
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
import nr.g0;
import nr.x;
import oa.c;
import oa.g;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.image.fresco.tiled.TiledDraweeController$load$1", f = "TiledDraweeController.kt", l = {84}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nTiledDraweeController.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TiledDraweeController.kt\ncom/discord/image/fresco/tiled/TiledDraweeController$load$1\n+ 2 BitmapDrawable.kt\nandroidx/core/graphics/drawable/BitmapDrawableKt\n*L\n1#1,107:1\n27#2:108\n*S KotlinDebug\n*F\n+ 1 TiledDraweeController.kt\ncom/discord/image/fresco/tiled/TiledDraweeController$load$1\n*L\n92#1:108\n*E\n"})
/* loaded from: classes.dex */
public final class TiledDraweeController$load$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    long J$0;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ TiledDraweeController this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public TiledDraweeController$load$1(TiledDraweeController tiledDraweeController, Continuation continuation) {
        super(2, continuation);
        this.this$0 = tiledDraweeController;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        TiledDraweeController$load$1 tiledDraweeController$load$1 = new TiledDraweeController$load$1(this.this$0, continuation);
        tiledDraweeController$load$1.L$0 = obj;
        return tiledDraweeController$load$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        String str;
        DataSource a;
        long j;
        GenericDraweeHierarchy genericDraweeHierarchy;
        Resources resources;
        Shader.TileMode tileMode;
        Shader.TileMode tileMode2;
        a aVar = a.f13464d;
        int i5 = this.label;
        BitmapDrawable bitmapDrawable = null;
        try {
            if (i5 == 0) {
                b.R(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                long currentTimeMillis = System.currentTimeMillis();
                str = this.this$0.url;
                a = d9.a.r().a(ImageRequest.fromUri(str), coroutineScope, null, null, null);
                e eVar = g0.a;
                ur.d dVar = ur.d.f19093i;
                TiledDraweeController$load$1$closableImageReference$1 tiledDraweeController$load$1$closableImageReference$1 = new TiledDraweeController$load$1$closableImageReference$1(a, null);
                this.L$0 = a;
                this.J$0 = currentTimeMillis;
                this.label = 1;
                obj = x.A(dVar, tiledDraweeController$load$1$closableImageReference$1, this);
                if (obj == aVar) {
                    return aVar;
                }
                j = currentTimeMillis;
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                j = this.J$0;
                a = (DataSource) this.L$0;
                b.R(obj);
            }
            CloseableReference closeableReference = (CloseableReference) obj;
            this.this$0.myImageReference = closeableReference;
            c cVar = closeableReference != null ? (c) closeableReference.q() : null;
            oa.d dVar2 = cVar instanceof oa.d ? (oa.d) cVar : null;
            Bitmap bitmap = dVar2 != null ? ((g) dVar2).f15806w : null;
            if (bitmap != null) {
                resources = this.this$0.resources;
                BitmapDrawable bitmapDrawable2 = new BitmapDrawable(resources, bitmap);
                TiledDraweeController tiledDraweeController = this.this$0;
                tileMode = tiledDraweeController.tileMode;
                tileMode2 = tiledDraweeController.tileMode;
                bitmapDrawable2.setTileModeXY(tileMode, tileMode2);
                bitmapDrawable = bitmapDrawable2;
            }
            boolean z5 = System.currentTimeMillis() - j >= 120;
            genericDraweeHierarchy = this.this$0.hierarchy;
            if (genericDraweeHierarchy != null) {
                genericDraweeHierarchy.m(bitmapDrawable, 1.0f, !z5);
            }
            a.close();
            return Unit.a;
        } catch (Throwable th2) {
            a.close();
            throw th2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((TiledDraweeController$load$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
