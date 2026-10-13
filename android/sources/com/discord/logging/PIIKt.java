package com.discord.logging;

import java.lang.annotation.Annotation;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KCallable;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0018\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00012\n\u0010\u0003\u001a\u0006\u0012\u0002\b\u00030\u0004¨\u0006\u0005"}, d2 = {"getPIIFieldNames", "", "", "kClass", "Lkotlin/reflect/KClass;", "logging_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPII.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PII.kt\ncom/discord/logging/PIIKt\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 KAnnotatedElements.kt\nkotlin/reflect/full/KAnnotatedElements\n*L\n1#1,23:1\n774#2:24\n865#2:25\n295#2,2:27\n866#2:29\n1563#2:30\n1634#2,3:31\n20#3:26\n*S KotlinDebug\n*F\n+ 1 PII.kt\ncom/discord/logging/PIIKt\n*L\n20#1:24\n20#1:25\n20#1:27,2\n20#1:29\n21#1:30\n21#1:31,3\n20#1:26\n*E\n"})
/* loaded from: classes.dex */
public final class PIIKt {
    @NotNull
    public static final List<String> getPIIFieldNames(@NotNull KClass kClass) {
        Object obj;
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        Collection members = kClass.getMembers();
        ArrayList arrayList = new ArrayList();
        for (Object obj2 : members) {
            Iterator it = ((KCallable) obj2).getAnnotations().iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                if (((Annotation) obj) instanceof PII) {
                    break;
                }
            }
            if (((PII) obj) != null) {
                arrayList.add(obj2);
            }
        }
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            arrayList2.add(((KCallable) it2.next()).getName());
        }
        return arrayList2;
    }
}
