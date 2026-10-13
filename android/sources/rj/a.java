package rj;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public abstract class a {

    /* renamed from: b, reason: collision with root package name */
    public static final char[] f17389b;

    /* renamed from: d, reason: collision with root package name */
    public static final char[] f17391d;
    public static final char[] a = {'*', '*', '*', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    /* renamed from: c, reason: collision with root package name */
    public static final char[] f17390c = {'*', '*', '*', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    /* renamed from: e, reason: collision with root package name */
    public static final char[] f17392e = {'`', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '{', '|', '}', '~', 127};

    static {
        char[] cArr = {'!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_'};
        f17389b = cArr;
        f17391d = cArr;
    }

    public static void a(int i5, int i6, int[] iArr) {
        int i10 = ((i5 << 8) + i6) - 1;
        int i11 = i10 / 1600;
        iArr[0] = i11;
        int i12 = i10 - (i11 * 1600);
        int i13 = i12 / 40;
        iArr[1] = i13;
        iArr[2] = i12 - (i13 * 40);
    }

    public static int b(int i5, int i6) {
        int i10 = i5 - (((i6 * 149) % 255) + 1);
        return i10 >= 0 ? i10 : i10 + IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
    }
}
