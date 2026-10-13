package io.sentry.cache.tape;

import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import io.sentry.v5;
import iq.t;
import iq.x;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Stack;

/* loaded from: classes3.dex */
public final class d implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11443d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f11444e;

    /* renamed from: i, reason: collision with root package name */
    public Iterable f11445i;

    public d(e eVar, h hVar) {
        this.f11443d = 0;
        this.f11445i = eVar;
        this.f11444e = hVar;
    }

    public t a() {
        t tVar;
        Stack stack = (Stack) this.f11444e;
        t tVar2 = (t) this.f11445i;
        if (tVar2 == null) {
            throw new NoSuchElementException();
        }
        while (true) {
            if (!stack.isEmpty()) {
                iq.d dVar = ((x) stack.pop()).f12246v;
                while (dVar instanceof x) {
                    x xVar = (x) dVar;
                    stack.push(xVar);
                    dVar = xVar.f12245i;
                }
                t tVar3 = (t) dVar;
                if (tVar3.f12239e.length != 0) {
                    tVar = tVar3;
                    break;
                }
            } else {
                tVar = null;
                break;
            }
        }
        this.f11445i = tVar;
        return tVar2;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f11443d) {
            case 0:
                return ((h) this.f11444e).hasNext();
            default:
                return ((t) this.f11445i) != null;
        }
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f11443d) {
            case 0:
                byte[] bArr = (byte[]) ((h) this.f11444e).next();
                v5 v5Var = ((io.sentry.cache.g) ((e) this.f11445i).f11448i.f9329e).a;
                try {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(bArr), io.sentry.cache.g.f11441c));
                    try {
                        Breadcrumb breadcrumb = (Breadcrumb) v5Var.getSerializer().c(bufferedReader, Breadcrumb.class);
                        bufferedReader.close();
                        return breadcrumb;
                    } finally {
                    }
                } catch (Throwable th2) {
                    v5Var.getLogger().i(SentryLevel.ERROR, th2, "Error reading entity from scope cache", new Object[0]);
                    return null;
                }
            default:
                return a();
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f11443d) {
            case 0:
                ((h) this.f11444e).remove();
                return;
            default:
                throw new UnsupportedOperationException();
        }
    }

    public d(iq.d dVar) {
        this.f11443d = 1;
        this.f11444e = new Stack();
        while (dVar instanceof x) {
            x xVar = (x) dVar;
            ((Stack) this.f11444e).push(xVar);
            dVar = xVar.f12245i;
        }
        this.f11445i = (t) dVar;
    }
}
