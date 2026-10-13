package th;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class o1 {
    public static final Pattern a = Pattern.compile("[0-9]+-(NAM|LFH)\\.dat");

    public static ArrayList a(File file, File file2) {
        File[] fileArr;
        ArrayList arrayList = new ArrayList();
        File[] listFiles = file2.listFiles(new com.facebook.soloader.e0(1));
        if (listFiles != null) {
            File[] fileArr2 = new File[listFiles.length];
            int i5 = 0;
            while (true) {
                int length = listFiles.length;
                if (i5 >= length) {
                    fileArr = fileArr2;
                    break;
                }
                File file3 = listFiles[i5];
                int parseInt = Integer.parseInt(file3.getName().split("-")[0]);
                if (parseInt > length || fileArr2[parseInt] != null) {
                    break;
                }
                fileArr2[parseInt] = file3;
                i5++;
            }
            throw new l0("Metadata folder ordering corrupt.");
        }
        fileArr = new File[0];
        for (File file4 : fileArr) {
            arrayList.add(file4);
            if (file4.getName().contains("LFH")) {
                FileInputStream fileInputStream = new FileInputStream(file4);
                try {
                    String str = new b0(fileInputStream).c().a;
                    if (str == null) {
                        throw new l0("Metadata files corrupt. Could not read local file header.");
                    }
                    File file5 = new File(file, str);
                    if (!file5.exists()) {
                        throw new l0("Missing asset file " + file5.getCanonicalPath() + " during slice reconstruction.");
                    }
                    arrayList.add(file5);
                    fileInputStream.close();
                } catch (Throwable th2) {
                    try {
                        fileInputStream.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            }
        }
        return arrayList;
    }
}
