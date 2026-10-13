package v3;

import android.util.Log;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/* loaded from: classes.dex */
public final class f {

    /* renamed from: b, reason: collision with root package name */
    public static final String f19201b = p.f("Data");

    /* renamed from: c, reason: collision with root package name */
    public static final f f19202c;
    public final HashMap a;

    static {
        f fVar = new f(new HashMap());
        b(fVar);
        f19202c = fVar;
    }

    public f(f fVar) {
        this.a = new HashMap(fVar.a);
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0052, code lost:
    
        if (r4 != null) goto L49;
     */
    /* JADX WARN: Removed duplicated region for block: B:39:0x005d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static f a(byte[] bArr) {
        Throwable th2;
        ObjectInputStream objectInputStream;
        Throwable e9;
        String str = f19201b;
        if (bArr.length > 10240) {
            throw new IllegalStateException("Data cannot occupy more than 10240 bytes when serialized");
        }
        HashMap hashMap = new HashMap();
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
        ObjectInputStream objectInputStream2 = null;
        try {
            try {
                objectInputStream = new ObjectInputStream(byteArrayInputStream);
                try {
                    for (int readInt = objectInputStream.readInt(); readInt > 0; readInt--) {
                        hashMap.put(objectInputStream.readUTF(), objectInputStream.readObject());
                    }
                } catch (IOException e10) {
                    e9 = e10;
                    Log.e(str, "Error in Data#fromByteArray: ", e9);
                } catch (ClassNotFoundException e11) {
                    e9 = e11;
                    Log.e(str, "Error in Data#fromByteArray: ", e9);
                }
            } catch (Throwable th3) {
                th2 = th3;
                if (0 != 0) {
                    try {
                        objectInputStream2.close();
                    } catch (IOException e12) {
                        Log.e(str, "Error in Data#fromByteArray: ", e12);
                    }
                }
                try {
                    byteArrayInputStream.close();
                    throw th2;
                } catch (IOException e13) {
                    Log.e(str, "Error in Data#fromByteArray: ", e13);
                    throw th2;
                }
            }
        } catch (IOException e14) {
            e = e14;
            Throwable th4 = e;
            objectInputStream = null;
            e9 = th4;
            Log.e(str, "Error in Data#fromByteArray: ", e9);
        } catch (ClassNotFoundException e15) {
            e = e15;
            Throwable th42 = e;
            objectInputStream = null;
            e9 = th42;
            Log.e(str, "Error in Data#fromByteArray: ", e9);
        } catch (Throwable th5) {
            th2 = th5;
            if (0 != 0) {
            }
            byteArrayInputStream.close();
            throw th2;
        }
        try {
            objectInputStream.close();
        } catch (IOException e16) {
            Log.e(str, "Error in Data#fromByteArray: ", e16);
        }
        try {
            byteArrayInputStream.close();
        } catch (IOException e17) {
            Log.e(str, "Error in Data#fromByteArray: ", e17);
        }
        return new f(hashMap);
    }

    public static byte[] b(f fVar) {
        ObjectOutputStream objectOutputStream;
        String str = f19201b;
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        ObjectOutputStream objectOutputStream2 = null;
        try {
            try {
                objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (IOException e9) {
            e = e9;
        }
        try {
            objectOutputStream.writeInt(fVar.a.size());
            for (Map.Entry entry : fVar.a.entrySet()) {
                objectOutputStream.writeUTF((String) entry.getKey());
                objectOutputStream.writeObject(entry.getValue());
            }
            try {
                objectOutputStream.close();
            } catch (IOException e10) {
                Log.e(str, "Error in Data#toByteArray: ", e10);
            }
            try {
                byteArrayOutputStream.close();
            } catch (IOException e11) {
                Log.e(str, "Error in Data#toByteArray: ", e11);
            }
            if (byteArrayOutputStream.size() <= 10240) {
                return byteArrayOutputStream.toByteArray();
            }
            throw new IllegalStateException("Data cannot occupy more than 10240 bytes when serialized");
        } catch (IOException e12) {
            e = e12;
            objectOutputStream2 = objectOutputStream;
            Log.e(str, "Error in Data#toByteArray: ", e);
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            if (objectOutputStream2 != null) {
                try {
                    objectOutputStream2.close();
                } catch (IOException e13) {
                    Log.e(str, "Error in Data#toByteArray: ", e13);
                }
            }
            try {
                byteArrayOutputStream.close();
            } catch (IOException e14) {
                Log.e(str, "Error in Data#toByteArray: ", e14);
            }
            return byteArray;
        } catch (Throwable th3) {
            th = th3;
            objectOutputStream2 = objectOutputStream;
            if (objectOutputStream2 != null) {
                try {
                    objectOutputStream2.close();
                } catch (IOException e15) {
                    Log.e(str, "Error in Data#toByteArray: ", e15);
                }
            }
            try {
                byteArrayOutputStream.close();
                throw th;
            } catch (IOException e16) {
                Log.e(str, "Error in Data#toByteArray: ", e16);
                throw th;
            }
        }
    }

    public final boolean equals(Object obj) {
        if (this != obj) {
            if (obj != null && f.class == obj.getClass()) {
                HashMap hashMap = ((f) obj).a;
                HashMap hashMap2 = this.a;
                Set<String> keySet = hashMap2.keySet();
                if (keySet.equals(hashMap.keySet())) {
                    for (String str : keySet) {
                        Object obj2 = hashMap2.get(str);
                        Object obj3 = hashMap.get(str);
                        if (!((obj2 == null || obj3 == null) ? obj2 == obj3 : ((obj2 instanceof Object[]) && (obj3 instanceof Object[])) ? Arrays.deepEquals((Object[]) obj2, (Object[]) obj3) : obj2.equals(obj3))) {
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    public final int hashCode() {
        return this.a.hashCode() * 31;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Data {");
        HashMap hashMap = this.a;
        if (!hashMap.isEmpty()) {
            for (String str : hashMap.keySet()) {
                sb2.append(str);
                sb2.append(" : ");
                Object obj = hashMap.get(str);
                if (obj instanceof Object[]) {
                    sb2.append(Arrays.toString((Object[]) obj));
                } else {
                    sb2.append(obj);
                }
                sb2.append(", ");
            }
        }
        sb2.append("}");
        return sb2.toString();
    }

    public f(HashMap hashMap) {
        this.a = new HashMap(hashMap);
    }
}
