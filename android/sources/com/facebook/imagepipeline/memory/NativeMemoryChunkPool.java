package com.facebook.imagepipeline.memory;

import o8.c;
import qa.p;
import qa.w;
import qa.x;
import r8.b;

@c
/* loaded from: classes3.dex */
public class NativeMemoryChunkPool extends p {
    @c
    public NativeMemoryChunkPool(b bVar, w wVar, x xVar) {
        super(bVar, wVar, xVar);
    }

    @Override // qa.b
    public final Object a(int i5) {
        return new NativeMemoryChunk(i5);
    }
}
