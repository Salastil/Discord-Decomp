package com.facebook.imagepipeline.producers;

/* loaded from: classes3.dex */
public abstract class d implements NetworkFetcher {
    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public boolean shouldPropagate(FetchState fetchState) {
        return true;
    }
}
