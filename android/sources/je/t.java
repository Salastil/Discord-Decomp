package je;

import android.util.SparseArray;
import androidx.appcompat.widget.w;
import java.io.File;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;

/* loaded from: classes3.dex */
public final class t extends i {

    /* renamed from: y, reason: collision with root package name */
    public static final Pattern f12755y = Pattern.compile("^(.+)\\.(\\d+)\\.(\\d+)\\.v1\\.exo$", 32);
    public static final Pattern E = Pattern.compile("^(.+)\\.(\\d+)\\.(\\d+)\\.v2\\.exo$", 32);
    public static final Pattern F = Pattern.compile("^(\\d+)\\.(\\d+)\\.(\\d+)\\.v3\\.exo$", 32);

    /* JADX WARN: Code restructure failed: missing block: B:51:0x00d1, code lost:
    
        if (r16.renameTo(r1) == false) goto L30;
     */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00a4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static t b(File file, long j, long j5, w wVar) {
        File file2;
        long j7;
        String group;
        File c6;
        String name = file.getName();
        if (!name.endsWith(".v3.exo")) {
            String name2 = file.getName();
            Matcher matcher = E.matcher(name2);
            if (!matcher.matches()) {
                matcher = f12755y.matcher(name2);
                if (matcher.matches()) {
                    group = matcher.group(1);
                    group.getClass();
                    if (group != null) {
                    }
                    c6 = null;
                    if (c6 != null) {
                    }
                    return null;
                }
                group = null;
                if (group != null) {
                }
                c6 = null;
                if (c6 != null) {
                }
                return null;
            }
            group = matcher.group(1);
            group.getClass();
            int i5 = d0.a;
            int length = group.length();
            int i6 = 0;
            int i10 = 0;
            for (int i11 = 0; i11 < length; i11++) {
                if (group.charAt(i11) == '%') {
                    i10++;
                }
            }
            if (i10 != 0) {
                int i12 = length - (i10 * 2);
                StringBuilder sb2 = new StringBuilder(i12);
                Matcher matcher2 = d0.f13301i.matcher(group);
                while (i10 > 0 && matcher2.find()) {
                    String group2 = matcher2.group(1);
                    group2.getClass();
                    char parseInt = (char) Integer.parseInt(group2, 16);
                    sb2.append((CharSequence) group, i6, matcher2.start());
                    sb2.append(parseInt);
                    i6 = matcher2.end();
                    i10--;
                }
                if (i6 < length) {
                    sb2.append((CharSequence) group, i6, length);
                }
                if (sb2.length() == i12) {
                    group = sb2.toString();
                }
                group = null;
            }
            if (group != null) {
                File parentFile = file.getParentFile();
                ke.b.l(parentFile);
                int i13 = wVar.z(group).a;
                String group3 = matcher.group(2);
                group3.getClass();
                long parseLong = Long.parseLong(group3);
                String group4 = matcher.group(3);
                group4.getClass();
                c6 = c(parentFile, i13, parseLong, Long.parseLong(group4));
            }
            c6 = null;
            if (c6 != null) {
                file2 = c6;
                name = c6.getName();
            }
            return null;
        }
        file2 = file;
        Matcher matcher3 = F.matcher(name);
        if (matcher3.matches()) {
            String group5 = matcher3.group(1);
            group5.getClass();
            String str = (String) ((SparseArray) wVar.f1142e).get(Integer.parseInt(group5));
            if (str != null) {
                long length2 = j == -1 ? file2.length() : j;
                if (length2 != 0) {
                    String group6 = matcher3.group(2);
                    group6.getClass();
                    long parseLong2 = Long.parseLong(group6);
                    if (j5 == -9223372036854775807L) {
                        String group7 = matcher3.group(3);
                        group7.getClass();
                        j7 = Long.parseLong(group7);
                    } else {
                        j7 = j5;
                    }
                    return new t(str, parseLong2, length2, j7, file2);
                }
            }
        }
        return null;
    }

    public static File c(File file, int i5, long j, long j5) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(i5);
        sb2.append(".");
        sb2.append(j);
        sb2.append(".");
        return new File(file, a3.e.m(sb2, j5, ".v3.exo"));
    }
}
