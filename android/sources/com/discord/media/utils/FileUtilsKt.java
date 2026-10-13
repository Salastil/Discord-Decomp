package com.discord.media.utils;

import et.q;
import et.y;
import java.io.File;
import java.io.InputStream;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0001H\u0000¨\u0006\u0004"}, d2 = {"writeTo", "Ljava/io/File;", "Ljava/io/InputStream;", "outputFile", "media_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FileUtilsKt {
    @NotNull
    public static final File writeTo(@NotNull InputStream inputStream, @NotNull File outputFile) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        Intrinsics.checkNotNullParameter(outputFile, "outputFile");
        q c6 = y.c(y.k(outputFile));
        try {
            c6.J(y.m(inputStream));
            Unit unit = Unit.a;
            c6.close();
            return outputFile;
        } finally {
        }
    }
}
