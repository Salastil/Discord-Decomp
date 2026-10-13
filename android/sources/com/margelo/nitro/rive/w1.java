package com.margelo.nitro.rive;

import android.util.Log;
import app.rive.runtime.kotlin.core.FileAsset;
import app.rive.runtime.kotlin.core.ImageAsset;
import kotlin.Unit;
import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class w1 {
    public final sr.d a;

    public w1() {
        ur.e eVar = nr.g0.a;
        ur.d dVar = ur.d.f19093i;
        nr.m1 m1Var = new nr.m1();
        dVar.getClass();
        this.a = nr.x.b(kotlin.coroutines.e.c(dVar, m1Var));
    }

    public final nr.o a(ResolvedReferencedAsset resolvedReferencedAsset, FileAsset fileAsset) {
        nr.o a = nr.x.a();
        if (resolvedReferencedAsset.getImage() != null) {
            HybridRiveImageSpec image = resolvedReferencedAsset.getImage();
            if ((fileAsset instanceof ImageAsset) && (image instanceof HybridRiveImage)) {
                ((ImageAsset) fileAsset).setImage(((HybridRiveImage) image).getRenderImage());
            }
            a.S(Unit.a);
            return a;
        }
        try {
            p u5 = ks.n.u(resolvedReferencedAsset);
            if (u5 == null) {
                a.S(Unit.a);
                return a;
            }
            nr.x.t(this.a, null, new androidx.lifecycle.g0(u5, this, fileAsset, a, (Continuation) null, 1), 3);
            return a;
        } catch (Exception e9) {
            Log.e("ReferencedAssetLoader", "Failed to resolve asset: " + e9.getMessage());
            a.S(Unit.a);
            return a;
        }
    }
}
