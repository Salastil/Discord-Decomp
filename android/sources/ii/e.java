package ii;

/* loaded from: classes3.dex */
public final class e extends com.facebook.imagepipeline.nativecode.b {
    @Override // com.facebook.imagepipeline.nativecode.b
    public final void C(l lVar, l lVar2) {
        lVar.f10829b = lVar2;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final void D(l lVar, Thread thread) {
        lVar.a = thread;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean d(m mVar, c cVar, c cVar2) {
        synchronized (mVar) {
            try {
                if (mVar.f10835e != cVar) {
                    return false;
                }
                mVar.f10835e = cVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean e(m mVar, Object obj, Object obj2) {
        synchronized (mVar) {
            try {
                if (mVar.f10834d != obj) {
                    return false;
                }
                mVar.f10834d = obj2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean f(m mVar, l lVar, l lVar2) {
        synchronized (mVar) {
            try {
                if (mVar.f10836i != lVar) {
                    return false;
                }
                mVar.f10836i = lVar2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final c n(m mVar) {
        c cVar;
        c cVar2 = c.f10817d;
        synchronized (mVar) {
            try {
                cVar = mVar.f10835e;
                if (cVar != cVar2) {
                    mVar.f10835e = cVar2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return cVar;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final l o(m mVar) {
        l lVar;
        l lVar2 = l.f10828c;
        synchronized (mVar) {
            try {
                lVar = mVar.f10836i;
                if (lVar != lVar2) {
                    mVar.f10836i = lVar2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return lVar;
    }
}
