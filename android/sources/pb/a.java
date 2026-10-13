package pb;

import a5.m;
import java.io.File;
import java.io.FilenameFilter;
import th.x0;

/* loaded from: classes3.dex */
public final class a implements FilenameFilter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ String f16338b;

    public /* synthetic */ a(String str, int i5) {
        this.a = i5;
        this.f16338b = str;
    }

    @Override // java.io.FilenameFilter
    public final boolean accept(File file, String str) {
        int i5 = this.a;
        String str2 = this.f16338b;
        switch (i5) {
            case 0:
                return str.startsWith(str2);
            default:
                m mVar = x0.f18616h;
                return str.startsWith(String.valueOf(str2).concat("-")) && str.endsWith(".apk");
        }
    }
}
