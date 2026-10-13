package kotlin.jvm.internal;

import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.runtime.r;
import fo.n;
import java.lang.annotation.Annotation;
import java.util.List;
import k0.d;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlin.reflect.KTypeProjection;
import org.jetbrains.annotations.NotNull;
import zo.c;
import zo.w;

@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0002\b\u0015\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u001b\n\u0002\b\u0005\b\u0007\u0018\u0000 22\u00020\u0001:\u00012B1\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0001\u0012\u0006\u0010\t\u001a\u00020\b¢\u0006\u0004\b\n\u0010\u000bB'\b\u0016\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004\u0012\u0006\u0010\r\u001a\u00020\f¢\u0006\u0004\b\n\u0010\u000eJ\u0017\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u000f\u001a\u00020\fH\u0002¢\u0006\u0004\b\u0011\u0010\u0012J\u0013\u0010\u0011\u001a\u00020\u0010*\u00020\u0005H\u0002¢\u0006\u0004\b\u0011\u0010\u0013J\u001a\u0010\u0016\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u0014H\u0096\u0002¢\u0006\u0004\b\u0016\u0010\u0017J\u000f\u0010\u0018\u001a\u00020\bH\u0016¢\u0006\u0004\b\u0018\u0010\u0019J\u000f\u0010\u001a\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\u001a\u0010\u001bR\u001a\u0010\u0003\u001a\u00020\u00028\u0016X\u0096\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u001c\u001a\u0004\b\u001d\u0010\u001eR \u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00050\u00048\u0016X\u0096\u0004¢\u0006\f\n\u0004\b\u0006\u0010\u001f\u001a\u0004\b \u0010!R\"\u0010\u0007\u001a\u0004\u0018\u00010\u00018\u0000X\u0081\u0004¢\u0006\u0012\n\u0004\b\u0007\u0010\"\u0012\u0004\b%\u0010&\u001a\u0004\b#\u0010$R \u0010\t\u001a\u00020\b8\u0000X\u0081\u0004¢\u0006\u0012\n\u0004\b\t\u0010'\u0012\u0004\b)\u0010&\u001a\u0004\b(\u0010\u0019R\u001c\u0010-\u001a\u00020\u0010*\u0006\u0012\u0002\b\u00030*8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b+\u0010,R\u001a\u00100\u001a\b\u0012\u0004\u0012\u00020.0\u00048VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b/\u0010!R\u0014\u0010\r\u001a\u00020\f8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\r\u00101¨\u00063"}, d2 = {"Lkotlin/jvm/internal/TypeReference;", "Lkotlin/reflect/KType;", "Lzo/c;", "classifier", "", "Lkotlin/reflect/KTypeProjection;", "arguments", "platformTypeUpperBound", "", "flags", "<init>", "(Lzo/c;Ljava/util/List;Lkotlin/reflect/KType;I)V", "", "isMarkedNullable", "(Lzo/c;Ljava/util/List;Z)V", "convertPrimitiveToWrapper", "", "asString", "(Z)Ljava/lang/String;", "(Lkotlin/reflect/KTypeProjection;)Ljava/lang/String;", "", JankRecordStore.SCREEN_OTHER, "equals", "(Ljava/lang/Object;)Z", "hashCode", "()I", "toString", "()Ljava/lang/String;", "Lzo/c;", "getClassifier", "()Lzo/c;", "Ljava/util/List;", "getArguments", "()Ljava/util/List;", "Lkotlin/reflect/KType;", "getPlatformTypeUpperBound$kotlin_stdlib", "()Lkotlin/reflect/KType;", "getPlatformTypeUpperBound$kotlin_stdlib$annotations", "()V", "I", "getFlags$kotlin_stdlib", "getFlags$kotlin_stdlib$annotations", "Ljava/lang/Class;", "getArrayClassName", "(Ljava/lang/Class;)Ljava/lang/String;", "arrayClassName", "", "getAnnotations", "annotations", "()Z", "Companion", "kotlin-stdlib"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class TypeReference implements KType {
    public static final int IS_MARKED_NULLABLE = 1;
    public static final int IS_MUTABLE_COLLECTION_TYPE = 2;
    public static final int IS_NOTHING_TYPE = 4;

    @NotNull
    private final List<KTypeProjection> arguments;

    @NotNull
    private final c classifier;
    private final int flags;
    private final KType platformTypeUpperBound;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[w.values().length];
            try {
                w wVar = w.f21333d;
                iArr[0] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                w wVar2 = w.f21333d;
                iArr[1] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                w wVar3 = w.f21333d;
                iArr[2] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public TypeReference(@NotNull c classifier, @NotNull List<KTypeProjection> arguments, KType kType, int i5) {
        Intrinsics.checkNotNullParameter(classifier, "classifier");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.classifier = classifier;
        this.arguments = arguments;
        this.platformTypeUpperBound = kType;
        this.flags = i5;
    }

    private final String asString(KTypeProjection kTypeProjection) {
        String valueOf;
        w wVar = kTypeProjection.a;
        KType kType = kTypeProjection.f13550b;
        if (wVar == null) {
            return "*";
        }
        TypeReference typeReference = kType instanceof TypeReference ? (TypeReference) kType : null;
        if (typeReference == null || (valueOf = typeReference.asString(true)) == null) {
            valueOf = String.valueOf(kType);
        }
        w wVar2 = kTypeProjection.a;
        int i5 = wVar2 == null ? -1 : WhenMappings.$EnumSwitchMapping$0[wVar2.ordinal()];
        if (i5 == 1) {
            return valueOf;
        }
        if (i5 == 2) {
            return "in ".concat(valueOf);
        }
        if (i5 == 3) {
            return "out ".concat(valueOf);
        }
        throw new n();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence asString$lambda$0(TypeReference typeReference, KTypeProjection it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return typeReference.asString(it);
    }

    private final String getArrayClassName(Class<?> cls) {
        return Intrinsics.areEqual(cls, boolean[].class) ? "kotlin.BooleanArray" : Intrinsics.areEqual(cls, char[].class) ? "kotlin.CharArray" : Intrinsics.areEqual(cls, byte[].class) ? "kotlin.ByteArray" : Intrinsics.areEqual(cls, short[].class) ? "kotlin.ShortArray" : Intrinsics.areEqual(cls, int[].class) ? "kotlin.IntArray" : Intrinsics.areEqual(cls, float[].class) ? "kotlin.FloatArray" : Intrinsics.areEqual(cls, long[].class) ? "kotlin.LongArray" : Intrinsics.areEqual(cls, double[].class) ? "kotlin.DoubleArray" : "kotlin.Array";
    }

    public static /* synthetic */ void getFlags$kotlin_stdlib$annotations() {
    }

    public static /* synthetic */ void getPlatformTypeUpperBound$kotlin_stdlib$annotations() {
    }

    public boolean equals(Object other) {
        if (!(other instanceof TypeReference)) {
            return false;
        }
        TypeReference typeReference = (TypeReference) other;
        return Intrinsics.areEqual(getClassifier(), typeReference.getClassifier()) && Intrinsics.areEqual(getArguments(), typeReference.getArguments()) && Intrinsics.areEqual(this.platformTypeUpperBound, typeReference.platformTypeUpperBound) && this.flags == typeReference.flags;
    }

    @Override // zo.b
    @NotNull
    public List<Annotation> getAnnotations() {
        return m0.f13512d;
    }

    @Override // kotlin.reflect.KType
    @NotNull
    public List<KTypeProjection> getArguments() {
        return this.arguments;
    }

    @Override // kotlin.reflect.KType
    @NotNull
    public c getClassifier() {
        return this.classifier;
    }

    /* renamed from: getFlags$kotlin_stdlib, reason: from getter */
    public final int getFlags() {
        return this.flags;
    }

    /* renamed from: getPlatformTypeUpperBound$kotlin_stdlib, reason: from getter */
    public final KType getPlatformTypeUpperBound() {
        return this.platformTypeUpperBound;
    }

    public int hashCode() {
        return Integer.hashCode(this.flags) + ((getArguments().hashCode() + (getClassifier().hashCode() * 31)) * 31);
    }

    @Override // kotlin.reflect.KType
    public boolean isMarkedNullable() {
        return (this.flags & 1) != 0;
    }

    @NotNull
    public String toString() {
        return a.j(new StringBuilder(), asString(false), " (Kotlin reflection is not available)");
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public TypeReference(@NotNull c classifier, @NotNull List<KTypeProjection> arguments, boolean z5) {
        this(classifier, arguments, null, z5 ? 1 : 0);
        Intrinsics.checkNotNullParameter(classifier, "classifier");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
    }

    private final String asString(boolean convertPrimitiveToWrapper) {
        String name;
        c classifier = getClassifier();
        KClass kClass = classifier instanceof KClass ? (KClass) classifier : null;
        Class<?> z5 = kClass != null ? com.facebook.imagepipeline.nativecode.c.z(kClass) : null;
        if (z5 == null) {
            name = getClassifier().toString();
        } else if ((this.flags & 4) != 0) {
            name = "kotlin.Nothing";
        } else if (z5.isArray()) {
            name = getArrayClassName(z5);
        } else if (convertPrimitiveToWrapper && z5.isPrimitive()) {
            c classifier2 = getClassifier();
            Intrinsics.checkNotNull(classifier2, "null cannot be cast to non-null type kotlin.reflect.KClass<*>");
            name = com.facebook.imagepipeline.nativecode.c.A((KClass) classifier2).getName();
        } else {
            name = z5.getName();
        }
        String l6 = d.l(name, getArguments().isEmpty() ? "" : CollectionsKt.O(getArguments(), ", ", "<", ">", new r(7, this), 24), isMarkedNullable() ? "?" : "");
        KType kType = this.platformTypeUpperBound;
        if (!(kType instanceof TypeReference)) {
            return l6;
        }
        String asString = ((TypeReference) kType).asString(true);
        if (Intrinsics.areEqual(asString, l6)) {
            return l6;
        }
        if (Intrinsics.areEqual(asString, l6 + '?')) {
            return l6 + '!';
        }
        return "(" + l6 + ".." + asString + ')';
    }
}
