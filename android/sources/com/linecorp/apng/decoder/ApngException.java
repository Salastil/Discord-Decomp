package com.linecorp.apng.decoder;

import a3.e;
import fo.n;
import java.util.NoSuchElementException;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import mo.a;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\b\n\u0002\u0010\u000e\n\u0002\b\u0005\u0018\u00002\u00060\u0001j\u0002`\u0002:\u0001\u0012B\u001d\b\u0000\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0007\u0010\bB\u0011\b\u0010\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\tR\u0017\u0010\u0004\u001a\u00020\u00038\u0006¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\f\u0010\rR\u0016\u0010\u0011\u001a\u0004\u0018\u00010\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u0013"}, d2 = {"Lcom/linecorp/apng/decoder/ApngException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "errorCode", "", "throwable", "<init>", "(Lcom/linecorp/apng/decoder/ApngException$ErrorCode;Ljava/lang/Throwable;)V", "(Ljava/lang/Throwable;)V", "d", "Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "getErrorCode", "()Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "", "getMessage", "()Ljava/lang/String;", "message", "ErrorCode", "apng-drawable_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ApngException extends Exception {

    /* renamed from: d, reason: collision with root package name and from kotlin metadata */
    public final ErrorCode errorCode;

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u0010\b\u0086\u0081\u0002\u0018\u0000 \b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\bR\u0017\u0010\u0007\u001a\u00020\u00028\u0006¢\u0006\f\n\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006j\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011¨\u0006\u0012"}, d2 = {"Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "", "", "d", "I", "getErrorCode", "()I", "errorCode", "Companion", "ERR_STREAM_READ_FAIL", "ERR_UNEXPECTED_EOF", "ERR_INVALID_FILE_FORMAT", "ERR_NOT_EXIST_IMAGE", "ERR_FRAME_INDEX_OUT_OF_RANGE", "ERR_OUT_OF_MEMORY", "ERR_BITMAP_OPERATION", "ERR_UNSUPPORTED_TYPE", "ERR_WITH_CHILD_EXCEPTION", "apng-drawable_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class ErrorCode {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final ErrorCode ERR_BITMAP_OPERATION;
        public static final ErrorCode ERR_FRAME_INDEX_OUT_OF_RANGE;
        public static final ErrorCode ERR_INVALID_FILE_FORMAT;
        public static final ErrorCode ERR_NOT_EXIST_IMAGE;
        public static final ErrorCode ERR_OUT_OF_MEMORY;
        public static final ErrorCode ERR_STREAM_READ_FAIL;
        public static final ErrorCode ERR_UNEXPECTED_EOF;
        public static final ErrorCode ERR_UNSUPPORTED_TYPE;
        public static final ErrorCode ERR_WITH_CHILD_EXCEPTION;

        /* renamed from: e, reason: collision with root package name */
        public static final /* synthetic */ ErrorCode[] f6511e;

        /* renamed from: i, reason: collision with root package name */
        public static final /* synthetic */ a f6512i;

        /* renamed from: d, reason: collision with root package name and from kotlin metadata */
        public final int errorCode;

        @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001J\u0017\u0010\u0007\u001a\u00020\u00042\u0006\u0010\u0003\u001a\u00020\u0002H\u0000¢\u0006\u0004\b\u0005\u0010\u0006¨\u0006\b"}, d2 = {"Lcom/linecorp/apng/decoder/ApngException$ErrorCode$Companion;", "", "", "errorCode", "Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "fromErrorCode$apng_drawable_release", "(I)Lcom/linecorp/apng/decoder/ApngException$ErrorCode;", "fromErrorCode", "apng-drawable_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
        @SourceDebugExtension({"SMAP\nApngException.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ApngException.kt\ncom/linecorp/apng/decoder/ApngException$ErrorCode$Companion\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,102:1\n1137#2,2:103\n*S KotlinDebug\n*F\n+ 1 ApngException.kt\ncom/linecorp/apng/decoder/ApngException$ErrorCode$Companion\n*L\n98#1:103,2\n*E\n"})
        public static final class Companion {
            public Companion(DefaultConstructorMarker defaultConstructorMarker) {
            }

            @NotNull
            public final ErrorCode fromErrorCode$apng_drawable_release(int errorCode) {
                for (ErrorCode errorCode2 : ErrorCode.values()) {
                    if (errorCode2.getErrorCode() == errorCode) {
                        return errorCode2;
                    }
                }
                throw new NoSuchElementException("Array contains no element matching the predicate.");
            }
        }

        static {
            ErrorCode errorCode = new ErrorCode("ERR_STREAM_READ_FAIL", 0, -100);
            ERR_STREAM_READ_FAIL = errorCode;
            ErrorCode errorCode2 = new ErrorCode("ERR_UNEXPECTED_EOF", 1, -101);
            ERR_UNEXPECTED_EOF = errorCode2;
            ErrorCode errorCode3 = new ErrorCode("ERR_INVALID_FILE_FORMAT", 2, -102);
            ERR_INVALID_FILE_FORMAT = errorCode3;
            ErrorCode errorCode4 = new ErrorCode("ERR_NOT_EXIST_IMAGE", 3, -103);
            ERR_NOT_EXIST_IMAGE = errorCode4;
            ErrorCode errorCode5 = new ErrorCode("ERR_FRAME_INDEX_OUT_OF_RANGE", 4, -104);
            ERR_FRAME_INDEX_OUT_OF_RANGE = errorCode5;
            ErrorCode errorCode6 = new ErrorCode("ERR_OUT_OF_MEMORY", 5, -105);
            ERR_OUT_OF_MEMORY = errorCode6;
            ErrorCode errorCode7 = new ErrorCode("ERR_BITMAP_OPERATION", 6, -106);
            ERR_BITMAP_OPERATION = errorCode7;
            ErrorCode errorCode8 = new ErrorCode("ERR_UNSUPPORTED_TYPE", 7, -107);
            ERR_UNSUPPORTED_TYPE = errorCode8;
            ErrorCode errorCode9 = new ErrorCode("ERR_WITH_CHILD_EXCEPTION", 8, -200);
            ERR_WITH_CHILD_EXCEPTION = errorCode9;
            ErrorCode[] errorCodeArr = {errorCode, errorCode2, errorCode3, errorCode4, errorCode5, errorCode6, errorCode7, errorCode8, errorCode9};
            f6511e = errorCodeArr;
            f6512i = b.p(errorCodeArr);
            INSTANCE = new Companion(null);
        }

        public ErrorCode(String str, int i5, int i6) {
            this.errorCode = i6;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return f6512i;
        }

        public static ErrorCode valueOf(String str) {
            return (ErrorCode) Enum.valueOf(ErrorCode.class, str);
        }

        public static ErrorCode[] values() {
            return (ErrorCode[]) f6511e.clone();
        }

        public final int getErrorCode() {
            return this.errorCode;
        }
    }

    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[ErrorCode.values().length];
            try {
                iArr[ErrorCode.ERR_STREAM_READ_FAIL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[ErrorCode.ERR_UNEXPECTED_EOF.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[ErrorCode.ERR_INVALID_FILE_FORMAT.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[ErrorCode.ERR_NOT_EXIST_IMAGE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[ErrorCode.ERR_FRAME_INDEX_OUT_OF_RANGE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[ErrorCode.ERR_OUT_OF_MEMORY.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr[ErrorCode.ERR_BITMAP_OPERATION.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr[ErrorCode.ERR_UNSUPPORTED_TYPE.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                iArr[ErrorCode.ERR_WITH_CHILD_EXCEPTION.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public /* synthetic */ ApngException(ErrorCode errorCode, Throwable th2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(errorCode, (i5 & 2) != 0 ? null : th2);
    }

    @NotNull
    public final ErrorCode getErrorCode() {
        return this.errorCode;
    }

    @Override // java.lang.Throwable
    public String getMessage() {
        switch (WhenMappings.$EnumSwitchMapping$0[this.errorCode.ordinal()]) {
            case 1:
                return "Can't read the stream.";
            case 2:
                return "Unexpected end of file.";
            case 3:
                return "Invalid file format.";
            case 4:
                return "Not exist native image.";
            case 5:
                return "Frame index is out of range.";
            case 6:
                return "Out of memory";
            case 7:
                return "Error in the native bitmap operation.";
            case 8:
                return "Unsupported image type.";
            case 9:
                Throwable cause = getCause();
                return e.k("Failed with sub exception : ", cause != null ? cause.getMessage() : null);
            default:
                throw new n();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ApngException(@NotNull ErrorCode errorCode, Throwable th2) {
        super(th2);
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        this.errorCode = errorCode;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ApngException(@NotNull Throwable throwable) {
        this(ErrorCode.ERR_WITH_CHILD_EXCEPTION, throwable);
        Intrinsics.checkNotNullParameter(throwable, "throwable");
    }
}
