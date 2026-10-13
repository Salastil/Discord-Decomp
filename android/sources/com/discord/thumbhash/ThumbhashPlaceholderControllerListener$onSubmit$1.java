package com.discord.thumbhash;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.view.SimpleDraweeView;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import nr.g0;
import nr.x;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.thumbhash.ThumbhashPlaceholderControllerListener$onSubmit$1", f = "ThumbhashPlaceholderControllerListener.kt", l = {ChatViewRecyclerTypes.FORWARD_BREADCRUMB}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nThumbhashPlaceholderControllerListener.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ThumbhashPlaceholderControllerListener.kt\ncom/discord/thumbhash/ThumbhashPlaceholderControllerListener$onSubmit$1\n+ 2 BitmapDrawable.kt\nandroidx/core/graphics/drawable/BitmapDrawableKt\n*L\n1#1,63:1\n27#2:64\n*S KotlinDebug\n*F\n+ 1 ThumbhashPlaceholderControllerListener.kt\ncom/discord/thumbhash/ThumbhashPlaceholderControllerListener$onSubmit$1\n*L\n53#1:64\n*E\n"})
/* loaded from: classes3.dex */
public final class ThumbhashPlaceholderControllerListener$onSubmit$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ ThumbhashPlaceholderControllerListener this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ThumbhashPlaceholderControllerListener$onSubmit$1(ThumbhashPlaceholderControllerListener thumbhashPlaceholderControllerListener, Continuation continuation) {
        super(2, continuation);
        this.this$0 = thumbhashPlaceholderControllerListener;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        ThumbhashPlaceholderControllerListener$onSubmit$1 thumbhashPlaceholderControllerListener$onSubmit$1 = new ThumbhashPlaceholderControllerListener$onSubmit$1(this.this$0, continuation);
        thumbhashPlaceholderControllerListener$onSubmit$1.L$0 = obj;
        return thumbhashPlaceholderControllerListener$onSubmit$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        CoroutineScope coroutineScope;
        SimpleDraweeView simpleDraweeView;
        SimpleDraweeView simpleDraweeView2;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
            e eVar = g0.a;
            ThumbhashPlaceholderControllerListener$onSubmit$1$bitmap$1 thumbhashPlaceholderControllerListener$onSubmit$1$bitmap$1 = new ThumbhashPlaceholderControllerListener$onSubmit$1$bitmap$1(this.this$0, null);
            this.L$0 = coroutineScope2;
            this.label = 1;
            Object A = x.A(eVar, thumbhashPlaceholderControllerListener$onSubmit$1$bitmap$1, this);
            if (A == aVar) {
                return aVar;
            }
            coroutineScope = coroutineScope2;
            obj = A;
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            coroutineScope = (CoroutineScope) this.L$0;
            b.R(obj);
        }
        Bitmap bitmap = (Bitmap) obj;
        if (!x.s(coroutineScope)) {
            return Unit.a;
        }
        Intrinsics.checkNotNull(bitmap);
        simpleDraweeView = this.this$0.draweeView;
        Resources resources = simpleDraweeView.getContext().getResources();
        Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
        BitmapDrawable bitmapDrawable = new BitmapDrawable(resources, bitmap);
        simpleDraweeView2 = this.this$0.draweeView;
        ((GenericDraweeHierarchy) simpleDraweeView2.getHierarchy()).k(bitmapDrawable, 1);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ThumbhashPlaceholderControllerListener$onSubmit$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
