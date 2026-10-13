package io.sentry;

import java.io.File;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class c3 {
    public final io.sentry.protocol.v a;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.protocol.v f11416b;

    /* renamed from: c, reason: collision with root package name */
    public final ConcurrentHashMap f11417c;

    /* renamed from: d, reason: collision with root package name */
    public final File f11418d;

    /* renamed from: e, reason: collision with root package name */
    public final double f11419e;

    /* renamed from: f, reason: collision with root package name */
    public final String f11420f = "android";

    public c3(io.sentry.protocol.v vVar, io.sentry.protocol.v vVar2, Map map, File file, i4 i4Var) {
        this.a = vVar;
        this.f11416b = vVar2;
        this.f11417c = new ConcurrentHashMap(map);
        this.f11418d = file;
        this.f11419e = i4Var.d() / 1.0E9d;
    }
}
