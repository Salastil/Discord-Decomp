package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class o1 extends Throwable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5791d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o1(String str, int i5) {
        super(str);
        this.f5791d = i5;
    }

    @Override // java.lang.Throwable
    public final synchronized Throwable fillInStackTrace() {
        switch (this.f5791d) {
            case 0:
                synchronized (this) {
                    break;
                }
            case 1:
                synchronized (this) {
                    break;
                }
            case 2:
                synchronized (this) {
                    break;
                }
            case 3:
                synchronized (this) {
                    break;
                }
            default:
                synchronized (this) {
                    break;
                }
        }
        return this;
    }
}
