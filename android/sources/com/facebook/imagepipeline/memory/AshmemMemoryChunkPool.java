package com.facebook.imagepipeline.memory;

import android.annotation.TargetApi;
import o8.c;
import qa.a;
import qa.p;
import qa.w;
import qa.x;
import r8.b;

@c
@TargetApi(27)
/* loaded from: classes3.dex */
public class AshmemMemoryChunkPool extends p {
    @c
    public AshmemMemoryChunkPool(b bVar, w wVar, x xVar) {
        super(bVar, wVar, xVar);
    }

    @Override // qa.b
    public final Object a(int i5) {
        return new a(i5);
    }
}
