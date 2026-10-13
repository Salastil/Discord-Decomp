package com.discord.react_asset_fetcher;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import com.facebook.react.views.imagehelper.ImageSource;
import com.facebook.react.views.imagehelper.ResourceDrawableIdHelper;
import com.google.android.material.button.MaterialButton;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
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
@d(c = "com.discord.react_asset_fetcher.ReactAssetUtilsKt$setReactIcon$2", f = "ReactAssetUtils.kt", l = {72}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ReactAssetUtilsKt$setReactIcon$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $assetUrl;
    final /* synthetic */ MaterialButton $this_setReactIcon;
    Object L$0;
    int label;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/drawable/Drawable;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.react_asset_fetcher.ReactAssetUtilsKt$setReactIcon$2$1", f = "ReactAssetUtils.kt", l = {}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nReactAssetUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReactAssetUtils.kt\ncom/discord/react_asset_fetcher/ReactAssetUtilsKt$setReactIcon$2$1\n+ 2 BitmapDrawable.kt\nandroidx/core/graphics/drawable/BitmapDrawableKt\n*L\n1#1,93:1\n27#2:94\n*S KotlinDebug\n*F\n+ 1 ReactAssetUtils.kt\ncom/discord/react_asset_fetcher/ReactAssetUtilsKt$setReactIcon$2$1\n*L\n86#1:94\n*E\n"})
    /* renamed from: com.discord.react_asset_fetcher.ReactAssetUtilsKt$setReactIcon$2$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ String $assetUrl;
        final /* synthetic */ MaterialButton $this_setReactIcon;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(MaterialButton materialButton, String str, Continuation continuation) {
            super(2, continuation);
            this.$this_setReactIcon = materialButton;
            this.$assetUrl = str;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$this_setReactIcon, this.$assetUrl, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            a aVar = a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
            Context context = this.$this_setReactIcon.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            ImageSource imageSource = new ImageSource(context, this.$assetUrl, 0.0d, 0.0d, null, false, 60, null);
            MaterialButton materialButton = this.$this_setReactIcon;
            if (imageSource.get_isResource()) {
                ResourceDrawableIdHelper.getInstance();
                Context context2 = materialButton.getContext();
                Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
                Drawable resourceDrawable = ResourceDrawableIdHelper.getResourceDrawable(context2, imageSource.getSource());
                Intrinsics.checkNotNull(resourceDrawable);
                return resourceDrawable;
            }
            if (Intrinsics.areEqual(imageSource.getUri().getScheme(), "file")) {
                Drawable createFromPath = Drawable.createFromPath(imageSource.getUri().getPath());
                Intrinsics.checkNotNull(createFromPath);
                return createFromPath;
            }
            URLConnection openConnection = new URL(imageSource.getSource()).openConnection();
            Intrinsics.checkNotNull(openConnection, "null cannot be cast to non-null type java.net.HttpURLConnection");
            HttpURLConnection httpURLConnection = (HttpURLConnection) openConnection;
            httpURLConnection.connect();
            Bitmap decodeStream = BitmapFactory.decodeStream(httpURLConnection.getInputStream());
            Intrinsics.checkNotNull(decodeStream);
            Resources resources = materialButton.getResources();
            Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
            return new BitmapDrawable(resources, decodeStream);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ReactAssetUtilsKt$setReactIcon$2(MaterialButton materialButton, String str, Continuation continuation) {
        super(2, continuation);
        this.$this_setReactIcon = materialButton;
        this.$assetUrl = str;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ReactAssetUtilsKt$setReactIcon$2(this.$this_setReactIcon, this.$assetUrl, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        MaterialButton materialButton;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            MaterialButton materialButton2 = this.$this_setReactIcon;
            e eVar = g0.a;
            ur.d dVar = ur.d.f19093i;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(materialButton2, this.$assetUrl, null);
            this.L$0 = materialButton2;
            this.label = 1;
            Object A = x.A(dVar, anonymousClass1, this);
            if (A == aVar) {
                return aVar;
            }
            materialButton = materialButton2;
            obj = A;
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            materialButton = (MaterialButton) this.L$0;
            b.R(obj);
        }
        materialButton.setIcon((Drawable) obj);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ReactAssetUtilsKt$setReactIcon$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
