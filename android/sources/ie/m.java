package ie;

import java.io.IOException;

/* loaded from: classes3.dex */
public class m extends IOException {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f10690e = 0;

    /* renamed from: d, reason: collision with root package name */
    public final int f10691d;

    public m(int i5) {
        this.f10691d = i5;
    }

    public m(int i5, Exception exc) {
        super(exc);
        this.f10691d = i5;
    }

    public m(String str, int i5) {
        super(str);
        this.f10691d = i5;
    }

    public m(String str, Exception exc, int i5) {
        super(str, exc);
        this.f10691d = i5;
    }
}
