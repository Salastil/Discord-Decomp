package qo;

import bg.y0;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.io.FileWalkDirection;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class n extends m {
    public static void f(File file, File target) {
        Intrinsics.checkNotNullParameter(file, "<this>");
        Intrinsics.checkNotNullParameter(target, "target");
        if (!file.exists()) {
            throw new p(file, null, "The source file doesn't exist.", 2, null);
        }
        if (target.exists() && !target.delete()) {
            Intrinsics.checkNotNullParameter(file, "file");
            throw new b("Tried to overwrite the destination, but failed to delete it.", file, target);
        }
        if (file.isDirectory()) {
            if (!target.mkdirs()) {
                throw new y0("Failed to create target directory.", file, target);
            }
            return;
        }
        File parentFile = target.getParentFile();
        if (parentFile != null) {
            parentFile.mkdirs();
        }
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(target);
            try {
                com.facebook.imagepipeline.nativecode.b.h(fileInputStream, fileOutputStream, 8192);
                fileOutputStream.close();
                fileInputStream.close();
            } finally {
            }
        } finally {
        }
    }

    public static boolean g(File start) {
        Intrinsics.checkNotNullParameter(start, "<this>");
        Intrinsics.checkNotNullParameter(start, "<this>");
        FileWalkDirection direction = FileWalkDirection.f13540e;
        Intrinsics.checkNotNullParameter(start, "<this>");
        Intrinsics.checkNotNullParameter(direction, "direction");
        Intrinsics.checkNotNullParameter(start, "start");
        Intrinsics.checkNotNullParameter(direction, "direction");
        h hVar = new h(new j(start, direction, null, null, null, 0, 32, null));
        while (true) {
            boolean z5 = true;
            while (hVar.hasNext()) {
                File file = (File) hVar.next();
                if (file.delete() || !file.exists()) {
                    if (z5) {
                        break;
                    }
                }
                z5 = false;
            }
            return z5;
        }
    }

    public static final c h(c cVar) {
        File file = cVar.a;
        List<File> list = cVar.f16916b;
        ArrayList arrayList = new ArrayList(list.size());
        for (File file2 : list) {
            String name = file2.getName();
            if (!Intrinsics.areEqual(name, ".")) {
                if (!Intrinsics.areEqual(name, "..")) {
                    arrayList.add(file2);
                } else if (arrayList.isEmpty() || Intrinsics.areEqual(((File) CollectionsKt.Q(arrayList)).getName(), "..")) {
                    arrayList.add(file2);
                } else {
                    arrayList.remove(arrayList.size() - 1);
                }
            }
        }
        return new c(file, arrayList);
    }
}
