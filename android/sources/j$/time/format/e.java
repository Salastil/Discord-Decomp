package j$.time.format;

import java.util.ArrayList;
import java.util.List;

/* loaded from: classes2.dex */
public final class e implements f {
    public final f[] a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f12300b;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public e(List list, boolean z5) {
        this((f[]) r2.toArray(new f[r2.size()]), z5);
        ArrayList arrayList = (ArrayList) list;
    }

    public e(f[] fVarArr, boolean z5) {
        this.a = fVarArr;
        this.f12300b = z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0026, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x002f, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x002c, code lost:
    
        if (r2 != false) goto L11;
     */
    @Override // j$.time.format.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(p pVar, StringBuilder sb2) {
        int length = sb2.length();
        boolean z5 = this.f12300b;
        if (z5) {
            pVar.f12323c++;
        }
        try {
            for (f fVar : this.a) {
                if (!fVar.a(pVar, sb2)) {
                    sb2.setLength(length);
                }
            }
        } finally {
            if (z5) {
                pVar.f12323c--;
            }
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        f[] fVarArr = this.a;
        if (fVarArr != null) {
            boolean z5 = this.f12300b;
            sb2.append(z5 ? "[" : "(");
            for (f fVar : fVarArr) {
                sb2.append(fVar);
            }
            sb2.append(z5 ? "]" : ")");
        }
        return sb2.toString();
    }
}
