package com.discord.image.fresco.tiled;

import android.content.res.Resources;
import android.graphics.Shader;
import android.graphics.drawable.Animatable;
import android.view.MotionEvent;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.common.references.CloseableReference;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CompletableJob;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import nr.g0;
import nr.m1;
import nr.x;
import org.jetbrains.annotations.NotNull;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B!\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\u000f\u0010\u000b\u001a\u00020\nH\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u0011\u0010\u000e\u001a\u0004\u0018\u00010\rH\u0016¢\u0006\u0004\b\u000e\u0010\u000fJ\u0019\u0010\u0011\u001a\u00020\n2\b\u0010\u0010\u001a\u0004\u0018\u00010\rH\u0016¢\u0006\u0004\b\u0011\u0010\u0012J\u000f\u0010\u0013\u001a\u00020\nH\u0016¢\u0006\u0004\b\u0013\u0010\fJ\u000f\u0010\u0014\u001a\u00020\nH\u0016¢\u0006\u0004\b\u0014\u0010\fJ\u0017\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\u0015H\u0016¢\u0006\u0004\b\u0017\u0010\u0018J\u0019\u0010\u001b\u001a\u00020\u00152\b\u0010\u001a\u001a\u0004\u0018\u00010\u0019H\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ\u000f\u0010\u001e\u001a\u00020\u001dH\u0016¢\u0006\u0004\b\u001e\u0010\u001fJ\u0019\u0010!\u001a\u00020\n2\b\u0010 \u001a\u0004\u0018\u00010\u0004H\u0016¢\u0006\u0004\b!\u0010\"J\u0011\u0010#\u001a\u0004\u0018\u00010\u0004H\u0016¢\u0006\u0004\b#\u0010$J\u0019\u0010&\u001a\u00020\u00152\b\u0010%\u001a\u0004\u0018\u00010\u0001H\u0016¢\u0006\u0004\b&\u0010'R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010(R\u0014\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010)R\u0014\u0010\u0007\u001a\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010*R\u0014\u0010,\u001a\u00020+8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b,\u0010-R\u0014\u0010/\u001a\u00020.8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b/\u00100R\u001e\u00103\u001a\n\u0012\u0004\u0012\u000202\u0018\u0001018\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b3\u00104R\u0018\u0010\u0010\u001a\u0004\u0018\u0001058\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0010\u00106R\u0018\u0010 \u001a\u0004\u0018\u00010\u00048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b \u0010)¨\u00067"}, d2 = {"Lcom/discord/image/fresco/tiled/TiledDraweeController;", "Lcom/facebook/drawee/interfaces/DraweeController;", "Landroid/content/res/Resources;", "resources", "", "url", "Landroid/graphics/Shader$TileMode;", "tileMode", "<init>", "(Landroid/content/res/Resources;Ljava/lang/String;Landroid/graphics/Shader$TileMode;)V", "", "load", "()V", "Lcom/facebook/drawee/interfaces/DraweeHierarchy;", "getHierarchy", "()Lcom/facebook/drawee/interfaces/DraweeHierarchy;", "hierarchy", "setHierarchy", "(Lcom/facebook/drawee/interfaces/DraweeHierarchy;)V", "onAttach", "onDetach", "", "isVisibleInViewportHint", "onViewportVisibilityHint", "(Z)V", "Landroid/view/MotionEvent;", "event", "onTouchEvent", "(Landroid/view/MotionEvent;)Z", "Landroid/graphics/drawable/Animatable;", "getAnimatable", "()Landroid/graphics/drawable/Animatable;", "contentDescription", "setContentDescription", "(Ljava/lang/String;)V", "getContentDescription", "()Ljava/lang/String;", JankRecordStore.SCREEN_OTHER, "isSameImageRequest", "(Lcom/facebook/drawee/interfaces/DraweeController;)Z", "Landroid/content/res/Resources;", "Ljava/lang/String;", "Landroid/graphics/Shader$TileMode;", "Lkotlinx/coroutines/CompletableJob;", "job", "Lkotlinx/coroutines/CompletableJob;", "Lkotlinx/coroutines/CoroutineScope;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "Lcom/facebook/common/references/CloseableReference;", "Loa/c;", "myImageReference", "Lcom/facebook/common/references/CloseableReference;", "Lcom/facebook/drawee/generic/GenericDraweeHierarchy;", "Lcom/facebook/drawee/generic/GenericDraweeHierarchy;", "fresco_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTiledDraweeController.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TiledDraweeController.kt\ncom/discord/image/fresco/tiled/TiledDraweeController\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,107:1\n1#2:108\n*E\n"})
/* loaded from: classes.dex */
public final class TiledDraweeController implements DraweeController {
    private String contentDescription;
    private GenericDraweeHierarchy hierarchy;

    @NotNull
    private final CompletableJob job;
    private CloseableReference myImageReference;

    @NotNull
    private final Resources resources;

    @NotNull
    private final CoroutineScope scope;

    @NotNull
    private final Shader.TileMode tileMode;

    @NotNull
    private final String url;

    public TiledDraweeController(@NotNull Resources resources, @NotNull String url, @NotNull Shader.TileMode tileMode) {
        Intrinsics.checkNotNullParameter(resources, "resources");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(tileMode, "tileMode");
        this.resources = resources;
        this.url = url;
        this.tileMode = tileMode;
        m1 m1Var = new m1();
        this.job = m1Var;
        e eVar = g0.a;
        this.scope = x.b(kotlin.coroutines.e.c(m1Var, q.a.f16185w));
    }

    private final void load() {
        x.t(this.scope, null, new TiledDraweeController$load$1(this, null), 3);
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    @NotNull
    public Animatable getAnimatable() {
        throw new UnsupportedOperationException();
    }

    public String getContentDescription() {
        return this.contentDescription;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public DraweeHierarchy getHierarchy() {
        return this.hierarchy;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public boolean isSameImageRequest(DraweeController other) {
        CloseableReference closeableReference;
        TiledDraweeController tiledDraweeController = other instanceof TiledDraweeController ? (TiledDraweeController) other : null;
        return Intrinsics.areEqual(tiledDraweeController != null ? tiledDraweeController.url : null, this.url) && (closeableReference = this.myImageReference) != null && closeableReference.r();
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public void onAttach() {
        load();
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public void onDetach() {
        GenericDraweeHierarchy genericDraweeHierarchy = this.hierarchy;
        if (genericDraweeHierarchy != null) {
            genericDraweeHierarchy.f4481f.setDrawable(genericDraweeHierarchy.a);
            genericDraweeHierarchy.i();
        }
        CloseableReference closeableReference = this.myImageReference;
        if (closeableReference != null) {
            closeableReference.close();
        }
        this.myImageReference = null;
        Iterator it = this.job.t().iterator();
        while (it.hasNext()) {
            ((Job) it.next()).f(null);
        }
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public boolean onTouchEvent(MotionEvent event) {
        return false;
    }

    public void onViewportVisibilityHint(boolean isVisibleInViewportHint) {
    }

    public void setContentDescription(String contentDescription) {
        this.contentDescription = contentDescription;
    }

    @Override // com.facebook.drawee.interfaces.DraweeController
    public void setHierarchy(DraweeHierarchy hierarchy) {
        this.hierarchy = hierarchy != null ? (GenericDraweeHierarchy) hierarchy : null;
    }

    public /* synthetic */ TiledDraweeController(Resources resources, String str, Shader.TileMode tileMode, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(resources, str, (i5 & 4) != 0 ? Shader.TileMode.REPEAT : tileMode);
    }
}
