package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.common.BytesRange;

/* loaded from: classes3.dex */
public class FetchState {
    public final Consumer a;

    /* renamed from: b, reason: collision with root package name */
    public final ProducerContext f4691b;

    /* renamed from: c, reason: collision with root package name */
    public long f4692c = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f4693d;

    /* renamed from: e, reason: collision with root package name */
    public BytesRange f4694e;

    public FetchState(Consumer consumer, ProducerContext producerContext) {
        this.a = consumer;
        this.f4691b = producerContext;
    }
}
